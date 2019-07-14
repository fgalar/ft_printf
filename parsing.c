/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:10:36 by fanny             #+#    #+#             */
/*   Updated: 2019/07/14 10:35:21 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

int	parsing(const char *format, t_data *data)
{
	int	i;

	i = 0;
	if (format[i] == '%')
	{
		data->conv = format[i + 1];
		i++;
	}
	else
		data->buffer[i] = format[i];
	return (i);
}
