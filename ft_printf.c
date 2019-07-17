/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fanny             #+#    #+#             */
/*   Updated: 2019/07/16 16:07:45 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
		//data->index++;
	}
	ft_putstr(data->buffer);
	va_end(data->arg);
	return (data->len);
}

int	main()
{	
	printf("hello %c bom dia %c", "!", '.');
	return (0);
}
