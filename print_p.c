/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:27:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/10/07 14:45:47 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_p(t_data *data)
{
	long long *adress;

	data->prfx = 1;
	ft_strncpy(data->prefix, "0x", 2);
	data->flag[point] = 0;
	data->precis = 0;
	adress = va_arg(data->arg, void*);
	manage_size(data, itoa_base((unsigned long long)adress, 16));
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	return (0);
}
