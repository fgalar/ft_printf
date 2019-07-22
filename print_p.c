/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:27:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/22 14:09:10 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_p(t_data *data)
{
	long long *adress;
	char *prefix;

	prefix = "0x";
	adress = va_arg(data->arg, void*);
	ft_strcat(data->buffer, prefix);
	ft_strcat(data->buffer, itoa_base((unsigned long long)adress, 16));
	data->len = ft_strlen(data->buffer);
	return (0);
}


