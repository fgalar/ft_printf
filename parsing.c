/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/07/17 15:29:51 by fanny            ###   ########.fr       */
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
		data->buffer[data->len]= format[data->index];
		data->index++;
		data->len++;
	}
}
