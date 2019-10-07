/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/10/06 20:23:46 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

static int		get_conv(const char *format, t_data *data)
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
	if (format[data->index + 1])
	{
		data->index++;
		get_conv(format, data);
	}
	return (-1);
}

static void		get_size(t_data *data, const char *format)
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

static int		get_flag(const char *format, t_data *data)
{
	static char *flags[NB_FLAGS] = {"hh", "h", "ll", "l", "#", "+", " ", "-",
		"0", "%", "."};
	int			y;

	y = 0;
	while (y < NB_FLAGS)
	{
		if (!ft_strncmp(flags[y], &format[data->index], ft_strlen(flags[y])))
		{
			data->flag[y] = 1;
			if (data->flag[percent] && !print_percent(data))
				return (1);
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
	return (0);
}

void			parsing(const char *format, t_data *data)
{
	while (format[data->index])
	{
		if (format[data->index] == '%')
		{
			init_new_arg(data);
			data->index++;
			get_flag(format, data);
			if (get_conv(format, data) < 0)
				return ;
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
