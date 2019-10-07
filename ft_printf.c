/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fanny             #+#    #+#             */
/*   Updated: 2019/10/07 19:33:00 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_data	*data;

	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (-1);
	ft_bzero(data, sizeof(t_data));
	va_start(data->arg, format);
	while (format[data->index])
	{
		init_new_arg(data);
		parsing(format, data);
		/*puts(&data->conv);*/
		if (data->conv)
			dispatcher(data);
	}
	write(1, data->buffer, data->len);
	va_end(data->arg);
	return (data->len);
}
