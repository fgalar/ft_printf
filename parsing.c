/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/09/06 12:16:03 by fgarault         ###   ########.fr       */
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
	if (data->flag[point])
		data->precis = n_size;
	else
		data->widthness = n_size;
	data->index += ft_nbrlen(n_size);
	/*if (data->precis == 0)*/
	/*{*/
		/*data->flag[point] = 0;*/
		/*data->flag[zero] = 0;*/
	/*}*/
	if (data->precis || data->widthness)
	{
		if (data->widthness > data->precis)
			data->width_max = data->widthness;
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
				if (data->flag[less]) 
				{	
					ft_strcat(data->buffer, "%");
					data->len++;
					manage_size(data, "%");
				}
				if (!data->flag[less])
				{
					manage_size(data, "%");
					ft_strcat(data->buffer, "%");
					data->len++;
				}
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
