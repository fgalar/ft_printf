/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:40:09 by fanny             #+#    #+#             */
/*   Updated: 2019/10/03 12:54:45 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_u(t_data *data)
{
	char	*nb;

	data->flag[most] = 0;
	if (data->flag[hh])
		nb = itoa_base((unsigned char)va_arg(data->arg, int), 10);
	else if (data->flag[h])
		nb = itoa_base((unsigned short)va_arg(data->arg, int), 10);
	else if (data->flag[ll] || data->flag[l])
		nb = ft_utoa(va_arg(data->arg, unsigned long));
	else
		nb = itoa_base((unsigned long)va_arg(data->arg, unsigned int), 10);

	manage_size(data, nb);
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
