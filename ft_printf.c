/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fanny             #+#    #+#             */
/*   Updated: 2019/07/22 17:05:26 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> /*/!\*/
#include <stdlib.h>
#include "ft_printf.h"
#include "libft/libft.h"
#include <limits.h>

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
	int			i;
	int			y;

	i = ft_printf("%o\n%o\n%o\n%o\n%o\n\n", INT_MIN, INT_MAX, 0, 42, -56);
	y = printf("%o\n%o\n%o\n%o\n%o\n", INT_MIN, INT_MAX, 0, 42, -56);
	/*ft_putstr("taille ft_printf\t");
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putstr("taille printf\t\t");
	ft_putnbr(y);
	ft_putchar('\n');*/
	return (0);
}
