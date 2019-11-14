/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/11/14 18:53:53 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

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
			if (y <= 3 && (data->flag[hh] || data->flag[h] || data->flag[ll]
				|| data->flag[l]))
				init_new_arg(data);
			data->flag[y] = 1;
			if (y == 10)
				data->precis = 0;
			if (data->flag[percent])
				return (1);
			data->index += ft_strlen(flags[y]);
			get_flag(format, data);
		}
		if (ft_isdigit(format[data->index]) && format[data->index] != '0')
			get_size(data, format);
		y++;
	}
	return (0);
}

void			get_size(t_data *data, const char *format)
{
	int		n_size;

	n_size = ft_atoi(&format[data->index]);
	if (format[data->index - 1] == '.' || (data->flag[point] && data->precis ==
		0))
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
	get_flag(format, data);
}

static void		get_conv(const char *format, t_data *data)
{
	static char	conv[NB_CONV] = {'c', 's', 'p', 'd',
						'i', 'o', 'u', 'x', 'X', 'f'};
	int			y;
	char		c;

	y = 0;
	c = format[data->index];
	if (ft_ismaj(c) && c != 'X' && (c = ft_tolower(format[data->index])))
	{
		init_new_arg(data);
		data->flag[ll] = 1;
	}
	while (y < NB_CONV)
	{
		if (c == conv[y] && data->index++ && (data->conv = conv[y]))
			return ;
		y++;
	}
}

void			parsing(const char *format, t_data *data)
{
	if (format[data->index] == '%')
	{
		data->index++;
		init_new_arg(data);
		if (!get_flag(format, data))
			get_conv(format, data);
		dispatcher(format, data);
	}
	else
	{
		data->buffer[data->len] = format[data->index];
		data->len++;
		data->index++;
	}
}
