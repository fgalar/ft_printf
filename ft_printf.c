/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fanny             #+#    #+#             */
/*   Updated: 2019/07/22 09:53:25 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> /*/!\*/
#include <stdlib.h>
#include "ft_printf.h"
#include "libft/libft.h"

int		ft_printf(const char *format, ...)
{
	t_data	*data;
	
	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (-1);
	ft_bzero(data, sizeof(t_data));
	va_start(data->arg, format);
	while (format[data->index])
	{
		parsing(format, data);
	}
	ft_putstr(data->buffer);
	va_end(data->arg);
	return (data->len);
}

int	main()
{	
	int			a = 8;

	ft_printf("le printf mien = %p\n", &a);
	printf("le vrai printf = %p\n", &a);
	return (0);
}
