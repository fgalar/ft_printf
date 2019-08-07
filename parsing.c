/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/08/07 10:21:04 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

int		get_conv(const char *format, t_data *data)
{
	static char	conv[NB_CONV] = {'c','s','p','d','i','o','u','x','X','f'};
	int		y;

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

int		get_flag(const char *format, t_data *data)
{
	static char *flags[NB_FLAGS] = {"hh", "h", "ll", "l", "#", "+", " ", "-", "0", "%",};
	int			y;

	y = 0;
	while (y < NB_FLAGS)
	{
		if (!ft_strncmp(flags[y], &format[data->index], ft_strlen(flags[y])))
		{
			data->flag = flags[y];
			data->index += ft_strlen(flags[y]);
			check_overrides(format, data);
			return (1);
		}
		y++;
	}
	data->flag = "0";
	return (0);
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
			data->buffer[data->len]= format[data->index];
			data->index++;
			data->len++;
		}
	}
}
