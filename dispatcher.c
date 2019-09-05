/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/08/15 18:58:57 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void		manage_size(t_data *data, char *arg)
{
	int		len;

	len = data->size - ft_strlen(arg);
	int i = 0;
	while (i < NB_FLAGS)
	{
		ft_putnbr(data->flag[i]);
		ft_putchar('\n');
		i++;
	}
	if (len < 0)
		return ;
//	ft_putnbr(data->flag[point]);
	if (data->flag[most] || data->flag[diese] || data->flag[space])
		len--;
	if ((data->conv == 'x' || data->conv == 'X') && data->flag[diese])
		len--;
	if ((data->flag[point] || data->flag[zero]) && !data->flag[less])
		ft_memset(&data->buffer[data->len],'0', len);
	else
		ft_memset(&data->buffer[data->len],' ', len);
	data->len += len;
}

void	get_size(t_data *data, const char *format)
{
	int		i;
	int		n_size;

	i  = 0;
	n_size = ft_atoi(&format[data->index]);
	if ((data->size == 0) || (data->size <= n_size))
		data->size = n_size;
	else
		data->flag[point] = 0;
	data->index += ft_nbrlen(n_size);

	printf("size get : %s && format[index] : %c\n", ft_itoa(data->size), format[data->index]);
}

int		dispatcher(t_data *data)
{
	int			x;
	static char	conv[NB_CONV] = {'c', 's', 'p', 'd', 'i', 'o', 'u', 'x', 'X',
		'f'};
	static int	(*go_ft[NB_CONV])(t_data *data) = {print_c, print_s, print_p,
		print_d, print_d, print_o, print_u, print_x, print_x, print_f};

	x = 0;
	while (conv[x] != data->conv)
		x++;
	if (conv[x] == data->conv && x < NB_CONV)
		return ((go_ft[x])(data));
	return (0);
}
