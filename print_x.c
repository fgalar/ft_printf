/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:57:47 by fanny             #+#    #+#             */
/*   Updated: 2019/10/07 19:45:16 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_x(t_data *data)
{
	char	*nb;

	if (data->flag[hh])
		nb = itoa_base((unsigned char)va_arg(data->arg, unsigned), 16);
	else if (data->flag[h])
		nb = itoa_base((unsigned short)va_arg(data->arg, unsigned), 16);
	else if (data->flag[ll] || data->flag[l])
		nb = itoa_base(va_arg(data->arg, unsigned long), 16);
	else
		nb = itoa_base(va_arg(data->arg, unsigned), 16);
	manage_size(data, nb);
	if (data->conv == 'X')
		print_majhex(data->argument);
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
