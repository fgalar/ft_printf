/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:54:18 by fanny             #+#    #+#             */
/*   Updated: 2019/11/18 18:17:30 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	get_af_comma(t_float *nb, float f, t_data *data)
{
	(void)nb;
	(void)data;
	(void)f;
	int		integer_part;
	int		index;

	index = 0;
	if (!(nb->af_comma = (char*)malloc(sizeof(char) * (7))))
		return ;
	bzero(nb->af_comma, 7);
	while (index < 6)
	{
		integer_part = f;
		printf("%f\n", f);
		f -= integer_part;
		if (f >= 0.5)
			f += 0.000001;
		if (f >= 1)
			f-= 1;
		f *= 10;
		nb->af_comma[index] = '0' + (int)f;
		index++;
	}
	printf("apres = %s\n", nb->af_comma);
}
void	get_bf_comma(t_float *nb, float f, t_data *data)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while ((int)f > 0)
	{
		f /= 10;
		i++;
	}
	if (!(nb->bf_comma = (char*)malloc(sizeof(char) * i + 1)))
		return ;
	bzero(nb->bf_comma, i);
	data->len +=i;
	while (i > 0)
	{
		f*=10;
		nb->bf_comma[index] = '0' + (int)(f);
		//printf("index[%d] = %f\n",index, f);
		f -= ft_atoi(&nb->bf_comma[index]);
		index++;
		i--;
	}
	nb->bf_comma[index] = '\0';

}
char	*ft_ftoa(t_data *data, t_float *nb)
{
	int				index;
	float			f;
	char			*str;

	index = 0;
	while (nb->mantissa[index])
	{
		if (nb->mantissa[index] == '1')
			nb->m += 1.0 / ft_power(2, index + 1);
		index++;
	}
	f = ft_power(-1, nb->sign) * ((1 + nb->m)) * ft_power(2, nb->exp);
	//printf("%f\n", f);
	get_bf_comma(nb, f, data);
	get_af_comma(nb, f, data);
	str = ft_strdup(ft_strcat(nb->bf_comma, "."));
	str = ft_strdup(ft_strcat(str, nb->af_comma));

	return (str);
}
