/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:11 by fanny             #+#    #+#             */
/*   Updated: 2019/09/01 17:12:21 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_d(t_data *data)
{
	char	*nb;
	
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
	if (!ft_strcmp(nb, "0") && data->flag[point] && !data->size)
		return (0);
	if (data->size && !data->flag[less])
		manage_size(data, nb);
	if (nb[0] != '-' && (data->flag[most] || data->flag[space]))
		data->flag[most] ? ft_strcat(data->buffer,"+") : ft_strcat(data->buffer," ");
	ft_strcat(data->buffer, nb);
	data->len = ft_strlen(data->buffer);
	if (data->flag[less] && data->size)
		manage_size(data, nb);
	data->conv = 0;
	return (0);
}
