/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2020/02/27 15:21:27 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
static int		get_flag(t_data *data, const char *format)
{
	static char *flags[NB_FLAGS] = {"hh", "h", "ll", "l", "#", "+", " ", "-",
		"0", "%", "."};
	int			y;

	y = 0;
	while (y < NB_FLAGS)
	{
		format[data->index] == 'L' && data->index++ ? data->flag[ll] = 1 : 0;
		if (!ft_strncmp(flags[y], &format[data->index], ft_strlen(flags[y])))
		{
			if ((data->flag[hh] || data->flag[h]
				|| data->flag[ll] || data->flag[l]) && y <= 3)
				init_new_arg(data);
			data->flag[y] = 1;
			if (data->flag[percent])
				return (1);
			data->index += ft_strlen(flags[y]);
			//puts(flags[y]);
			if (y == 10)
				format[data->index] == '0'? data->index++ && (data->precis = 0): 0;
			get_flag(data, format);
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
	if (format[data->index - 1] == '.'
		|| (data->flag[point] && data->precis == 0))
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
	get_flag(data, format);
}

static void		get_conv(t_data *data, const char *format)
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

void			parsing(t_data *data, const char *format)
{
	if (format[data->index] == '%')
	{
		data->index++;
		init_new_arg(data);
		//printf("-----------------------\n");
		if (!get_flag(data, format))
			get_conv(data, format);
		//printf("precis = %d\n-----------------------\n", data->precis);
		dispatcher(data, format);
	}
	else
	{
		data->buffer[data->len] = format[data->index];
		data->len++;
		data->index++;
	}
}
