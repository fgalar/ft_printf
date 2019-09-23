/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:11 by fanny             #+#    #+#             */
/*   Updated: 2019/09/23 18:44:25 by fanny            ###   ########.fr       */
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
	if (nb[0] == '-')
	{
		data->neg = 1;
		nb = &nb[1];
	}
	if (data->flag[less] && data->width_max)
		data->width_max -= ft_strlen(nb);
	if (data->flag[less] && !data->flag[diese])
	{
		strcat(data->buffer, nb);
		if (data->widthness)
			data->widthness -= (ft_strlen(nb) - 1);
	}

	manage_size(data, nb);
	
	if (data->width_max || ft_strcmp(nb, "0") || (!ft_strcmp(nb, "0") && !data->flag[point]))
		ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
