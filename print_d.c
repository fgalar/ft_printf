/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:11 by fanny             #+#    #+#             */
/*   Updated: 2019/09/07 19:23:28 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_d(t_data *data)
{
	char	*nb;
	char	*tab;
	
	if (data->flag[hh])
		nb = ft_itoa((char)va_arg(data->arg, int));
	else if (data->flag[h])
		nb = ft_itoa((short int)va_arg(data->arg, int));
	else if (data->flag[ll])
		nb = itoa_base(va_arg(data->arg, long long), 10);
	else if (data->flag[l])
		nb = itoa_base(va_arg(data->arg, long), 10);
	else 
		nb = ft_itoa(va_arg(data->arg, int signed));
	manage_size(data, nb);
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
