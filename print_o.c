/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:07 by fanny             #+#    #+#             */
/*   Updated: 2019/07/31 15:25:14 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_o(t_data *data)
{
	char	*oct;

	if (!ft_strcmp(data->flag, "0"))
		oct = itoa_base(va_arg(data->arg, unsigned), 8);
	if (!ft_strcmp(data->flag, "hh"))
		oct = itoa_base((char)va_arg(data->arg, unsigned), 8);
	if (!ft_strcmp(data->flag, "h"))
		oct = itoa_base((short)va_arg(data->arg, unsigned), 8);
	if (!ft_strcmp(data->flag, "ll"))
		oct = itoa_base(va_arg(data->arg, unsigned long long), 8);
	if (!ft_strcmp(data->flag, "l"))
		oct = itoa_base(va_arg(data->arg, unsigned long), 8);
	ft_strcat(data->buffer, oct);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);	
}
