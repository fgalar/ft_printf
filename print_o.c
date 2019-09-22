/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:07 by fanny             #+#    #+#             */
/*   Updated: 2019/09/10 18:09:33 by fanny            ###   ########.fr       */
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
	if (data->flag[less] && !data->flag[diese])
	{
		strcat(data->buffer, oct);
		if (data->widthness)
			data->widthness -= (ft_strlen(oct) - 1);
	}
	
	manage_size(data, oct);	
	if (ft_strcmp(oct, "0") || (!ft_strcmp(oct, "0") && !data->flag[point]) || data->width_max)
		ft_strcat(data->buffer, data->argument);

	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);	
}
