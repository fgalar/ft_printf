/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:11 by fanny             #+#    #+#             */
/*   Updated: 2019/09/06 13:03:48 by fgarault         ###   ########.fr       */
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
		//if (!ft_strcmp(nb, "0") && !data->precis && data->flag[point])
	//	return (0);
	//if (data->width_max && !data->flag[less])
	
	manage_size(data, nb);
	
	data->len = ft_strlen(data->buffer);
//	if (data->flag[less] && data->width_max)
//		manage_size(data, nb);
	data->conv = 0;
	return (0);
}
