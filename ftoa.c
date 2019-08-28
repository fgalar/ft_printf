/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:54:18 by fanny             #+#    #+#             */
/*   Updated: 2019/08/28 19:25:16 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

char	*ft_ftoa(t_float *nb)
{
	char			*str = "coucou";
	int				index;
	double			f;

	index = 0;
	while (nb->mantissa[index])
	{
		if (nb->mantissa[index] == '1')
			nb->m += 1.0 / ft_power(2, index + 1);
		index++;
	}
	f = ft_power(-1, nb->sign) * ((1 + nb->m)) * ft_power(2, nb->exp);
	return (str);
}
