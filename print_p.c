/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:27:34 by fgarault          #+#    #+#             */
/*   Updated: 2020/04/23 14:03:55 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_p(t_data *data)
{
	long long	*address;
	char		*tab;

	data->prfx = 1;
	ft_strncpy(data->prefix, "0x", 2);
	address = va_arg(data->arg, void*);
	tab = itoa_base((unsigned long long)address, 16);
	handler(data, tab);
	ft_strcat(data->buffer, data->argument);
	data->len += ft_strlen(data->argument);
	data->conv = 0;
	return (0);
}
