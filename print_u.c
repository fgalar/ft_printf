/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:40:09 by fanny             #+#    #+#             */
/*   Updated: 2019/07/31 15:25:55 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_u(t_data *data)
{
	char	*nb;

	if (!ft_strcmp(data->flag, "0"))
		nb = itoa_base(va_arg(data->arg, unsigned), 10);
	if (!ft_strcmp(data->flag, "hh"))
		nb = itoa_base((unsigned char)va_arg(data->arg, unsigned), 10);
	if (!ft_strcmp(data->flag, "h"))
		nb = itoa_base((unsigned short)va_arg(data->arg, unsigned), 10);
	if (!ft_strcmp(data->flag, "ll") || !ft_strcmp(data->flag, "l"))
		nb = itoa_base(va_arg(data->arg, unsigned long), 10);
	if (!ft_strcmp(nb, "-9223372036854775808"))
		ft_strcat(data->buffer, &nb[1]);
	else
		ft_strcat(data->buffer, nb);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
