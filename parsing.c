/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/08/05 14:29:10 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

int		check_conv(const char *format, t_data *data)
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

int		check_flag(const char *format, t_data *data)
{
	static char *flags[NB_FLAGS] = {"hh", "h", "ll", "l"};
	int			y;

	y = 0;
	while (y < NB_FLAGS)
	{
		if (!ft_strncmp(flags[y], &format[data->index], ft_strlen(flags[y])))
		{
			data->flag = flags[y];
			data->index += ft_strlen(flags[y]);
			return (0);
		}
		if (format[data->index] == '%')
		{
			ft_strcat(data->buffer, "%");
			data->len++;
			data->index++;
			data->conv = '0';
			return (0);
		}
		y++;
	}
	data->flag = "0";
	return (-1);
}

void	parsing(const char *format, t_data *data)
{
	while (format[data->index])
	{
		if (format[data->index] == '%')
		{
			data->index++;
			check_flag(format, data);
			check_conv(format, data);
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
