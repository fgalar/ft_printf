/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <fgarault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fgarault          #+#    #+#             */
/*   Updated: 2020/03/14 12:21:55 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_data	*data;
	int		index;

	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (-1);
	init_struct(data);
	va_start(data->arg, format);
	while (format[data->index])
		parsing(data, format);
	index = purge_buff(data);
	va_end(data->arg);
	free(data);
	return (index);
}
