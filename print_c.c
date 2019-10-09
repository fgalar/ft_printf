/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:26:59 by fanny             #+#    #+#             */
/*   Updated: 2019/10/09 13:57:18 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_null(t_data *data)
{
	char	layout;

	if (data->flag[zero])
		layout = '0';
	else
		layout = ' ';
	data->precis = 0;
	data->flag[point] = 0;
	if (data->field > 1 && !data->flag[less])
	{
		ft_memset(&data->buffer[data->len], layout, data->field);
		data->len += data->field - 1;
	}
	ft_memset(&data->buffer[data->len], 0, sizeof(char));
	data->len++;
	if (data->flag[less] && data->field)
	{
		ft_memset(&data->buffer[data->len], layout, data->field);
		data->len += data->field - 1;
	}
}

int			print_c(t_data *data)
{
	unsigned char	c;

	c = va_arg(data->arg, int);
	if (c == 0)
		handle_null(data);
	if (c != 0)
	{
		manage_size(data, &c);
		ft_strcat(data->buffer, data->argument);
		data->len = ft_strlen(data->buffer);
	}
	data->conv = 0;
	return (0);
}
