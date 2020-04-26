/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:07 by fanny             #+#    #+#             */
/*   Updated: 2020/04/24 18:44:18 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_o(t_data *data)
{
	char	*oct;

	if (data->flag[hh])
		oct = itoa_base((unsigned char)va_arg(data->arg, int), 8);
	else if (data->flag[h])
		oct = itoa_base((unsigned short)va_arg(data->arg, int), 8);
	else if (data->flag[ll])
		oct = itoa_base(va_arg(data->arg, unsigned long long), 8);
	else if (data->flag[l])
		oct = itoa_base(va_arg(data->arg, unsigned long), 8);
	else
		oct = itoa_base(va_arg(data->arg, unsigned), 8);
	if (data->flag[diese] && data->precis && ft_strcmp(oct, "0"))
		data->precis--;
	if (!ft_strcmp(oct, "0") && data->flag[diese])
	{
		data->flag[diese] = 0;
		data->flag[point] && !data->precis ? data->precis += 1 : 0;
	}
	data->flag[space] = 0;
	handler(data, oct);
	ft_strcat(data->buffer, data->argument);
	data->len += ft_strlen(data->argument);
	data->conv = 0;
	return (0);
}
