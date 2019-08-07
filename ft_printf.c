/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fanny             #+#    #+#             */
/*   Updated: 2019/08/07 17:29:41 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

void	init_strct(t_data *data)
{
	data->len = 0;
	data->index = 0;
	data->prefix = 0;
}

int		ft_printf(const char *format, ...)
{
	t_data	*data;

	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (-1);
	ft_bzero(data, sizeof(t_data));
	init_strct(data);
	va_start(data->arg, format);
	while (format[data->index])
	{
		parsing(format, data);
	}
	ft_putstr(data->buffer);
	va_end(data->arg);
	return (data->len);
}
