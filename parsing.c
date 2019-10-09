/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/10/09 17:42:02 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"



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
			if(y >= 0 && y <= 3 && (data->flag[hh] || data->flag[h] || data->flag[ll] || data->flag[l]))
				init_new_arg(data);
			data->flag[y] = 1;
			if (data->flag[percent] && !print_a(data, "%"))
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
static int		get_conv(const char *format, t_data *data)
{
	static char	conv[NB_CONV] = {'c', 's', 'p', 'd', 'i', 'o', 'u', 'x', 'X',
		'f'};
	int			y;
	char		c;
	
	y = 0;
	c = format[data->index];
	if (format[data->index] == 'Z')
		return (print_a(data, "Z"));
	if (ft_ismaj(c) && c != 'X')
	{
		init_new_arg(data);
		data->flag[ll] = 1;
		c = ft_tolower(format[data->index]);
	}
	while (y < NB_CONV)
	{
		if (c == conv[y])
		{
			data->conv = conv[y];
			data->index++;
			return (0);
		}
		y++;
	}
	if (!data->conv && format[data->index+1])
	{
		data->index++;
		init_new_arg(data);
		data->flag[l] = 1;
		get_conv(format, data);
	}	
	return (-1);
}

void			parsing(const char *format, t_data *data)
{
	while (format[data->index])
	{
		if (format[data->index] == '%')
		{
			/*puts("get a %");*/
			data->index++;
			init_new_arg(data);
			get_flag(format, data);
			if (data->flag[percent])
				return ;
			get_conv(format, data);
			return ;
		}
		else
		{
			/*puts("else");*/
			data->buffer[data->len] = format[data->index];
			data->index++;
			data->len++;
		}
	}
}
