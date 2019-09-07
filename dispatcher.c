/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/09/07 20:17:17 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void		manage_size(t_data *data, char *arg)
{
	printf("widthness = %d|| precision = %d || width_max = %d\ndata->flag[point] = %d && data->precision = %d && data->conv = %c data->zero = %d\n", data->widthness, data->precis, data->width_max, data->flag[point], data->precis, data->conv, data->flag[zero]);
	
	int		len;
	
	len = ft_strlen(arg);
	printf("%d\n", len);
	if (data->width_max < len)
	{
		data->width_max = len;
	}
	if (data->widthness && !data->flag[zero])
		ft_memset(data->argument,'-', (data->widthness - 1));	
	if (data->precis || data->flag[zero])
	{
		data->precis ? ft_memset(&data->argument[data->width_max - data->precis], '0', data->precis) : ft_memset(data->argument, '0', (data->width_max - len));
	}
	if (data->flag[most])
		data->argument[data->width_max - (len + 1)] = '+';
	if (ft_strcmp(arg, "0") || !data->flag[point])
		ft_strcpy(&data->argument[data->width_max - len], arg);
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
