/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:07 by fanny             #+#    #+#             */
/*   Updated: 2019/09/05 12:56:17 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_o(t_data *data)
{
	char	*oct;
	char	*prefix;

	prefix = "0";
	if (data->flag[hh])
		oct = itoa_base((char)va_arg(data->arg, unsigned), 8);
	else if (data->flag[h])
		oct = itoa_base((short)va_arg(data->arg, unsigned), 8);
	else if (data->flag[ll])
		oct = itoa_base(va_arg(data->arg, unsigned long long), 8);
	else if (data->flag[l])
		oct = itoa_base(va_arg(data->arg, unsigned long), 8);
	else	
		oct = itoa_base(va_arg(data->arg, unsigned), 8);
	if (!ft_strcmp(oct, "0") && !data->precis && data->flag[point])
		return (0);	
	if (data->width_max && !data->flag[less])
		manage_size(data, oct);	
	if (data->flag[diese])
		ft_strcat(data->buffer, prefix);
	ft_strcat(data->buffer, oct);
	data->len = ft_strlen(data->buffer);
	if (data->width_max && data->flag[less])
		manage_size(data, oct);
	data->conv = 0;
	return (0);	
}
