/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/07/14 18:47:55 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

void	parsing(const char *format, t_data *data)
{
	while (format[data->index])
	{
		if (format[data->index] == '%')
		{
			data->index++;
			data->conv = format[data->index];
			dispatcher(data);
		}	
		else
			data->buffer[data->len]= format[data->index];
		data->index++;
		data->len++;
	}
}
