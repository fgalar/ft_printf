/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/09/25 16:03:46 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

int		get_conv(const char *format, t_data *data)
{
	static char	conv[NB_CONV] = {'c', 's', 'p', 'd', 'i', 'o', 'u', 'x', 'X',
		'f'};
	int			y;

	y = 0;
	while (y < NB_CONV)
	{
		if (format[data->index] == conv[y])
		{
			data->conv = conv[y];
			data->index++;
			return (0);
		}
		y++;
	}
	data->conv = '0';
	return (-1);
}

void	get_size(t_data *data, const char *format)
{
	int		n_size;
	
	n_size = ft_atoi(&format[data->index]);
	if (format[data->index - 1] == '.')
		data->precis = n_size;
	else
		data->field = n_size;
	data->index += ft_nbrlen(n_size);
	if (data->precis || data->field)
	{
		if (data->field > data->precis)
			data->width_max = data->field;
		else
		   data->width_max = data->precis;
	}
}

void		get_flag(const char *format, t_data *data)
{
	static char *flags[NB_FLAGS] = {"hh", "h", "ll", "l", "#", "+", " ", "-", "0", "%", "."};
	int			y;

	y = 0;
	while (y < NB_FLAGS)
	{
		if (!ft_strncmp(flags[y], &format[data->index], ft_strlen(flags[y])))
		{
			data->flag[y] = 1;
			if (data->flag[percent])
			{
				manage_size(data, "%");
				strcat(data->buffer, data->argument);
				data->len = ft_strlen(data->buffer);
			}
			data->index += ft_strlen(flags[y]);
			get_flag(format, data);
		}
		else if (ft_isdigit(format[data->index]) && format[data->index] != '0')
		{
			get_size(data, format);
			get_flag(format, data);
		}
		y++;
	}
}

void	parsing(const char *format, t_data *data)
{
	
	while (format[data->index])
	{
		if (format[data->index] == '%')
		{
			data->index++;
			get_flag(format, data);
			get_conv(format, data);
			dispatcher(data);
		}
		else
		{
			data->buffer[data->len] = format[data->index];
			data->index++;
			data->len++;
		}
	}
}
