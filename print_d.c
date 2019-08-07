/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:11 by fanny             #+#    #+#             */
/*   Updated: 2019/08/07 18:30:00 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_d(t_data *data)
{
	char	*nb;
	
	if (!ft_strcmp(data->flag, "0") || !ft_strcmp(data->flag, "+"))
		nb = ft_itoa(va_arg(data->arg, int signed));
	if (!ft_strcmp(data->flag, "hh"))
		nb = ft_itoa((char)va_arg(data->arg, int));
	if (!ft_strcmp(data->flag, "h"))
		nb = ft_itoa((short int)va_arg(data->arg, int));
	if (!ft_strcmp(data->flag, "ll"))
		nb = itoa_base(va_arg(data->arg, long long), 10);
	if (!ft_strcmp(data->flag, "l"))
		nb = itoa_base(va_arg(data->arg, long), 10);
	if (data->prefix && nb[0] != '-')
		ft_strcat(data->buffer, "+");
	ft_strcat(data->buffer, nb);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
