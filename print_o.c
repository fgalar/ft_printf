/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:07 by fanny             #+#    #+#             */
/*   Updated: 2019/09/27 16:50:57 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_o(t_data *data)
{
	char	*oct;

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
	manage_size(data, oct);	
	ft_strcat(data->buffer, data->argument);

	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);	
}
