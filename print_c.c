/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:26:59 by fanny             #+#    #+#             */
/*   Updated: 2019/10/01 12:03:56 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(t_data *data)
{
	unsigned char	c;

	c = (char)va_arg(data->arg, int);
	data->precis = 0;
	data->flag[point] = 0;	
	if (c == 0)
	{
		data->argument[data->len]= 0;
		data->len++;
	}
	manage_size(data, &c);	
	ft_strcat(data->buffer, data->argument);
	if (c == 0 && data->field && !data->flag[less])
	{
		//data->buffer[data->len] = 0;
		data->len++;
	}
	if (c != 0)
		data->len = ft_strlen(data->buffer);
	return (0);
}
