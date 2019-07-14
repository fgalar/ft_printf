/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:28:53 by fanny             #+#    #+#             */
/*   Updated: 2019/07/14 10:36:57 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	t_data	*data;
	int	index;

	
	if (!(data = (t_data*)malloc(sizeof(t_data))))
		return (-1);
	index = 0;
	//ft_bzero(data, sizeof(t_data));
	va_start(data->arg, format);
	while ((index += parsing(&format[index], data)) && format[index])
	{
		ft_putchar(format[index]);
	}
	va_end(data->arg);
	return (index);
}

int	main()
{	
	int 	i;
	i = ft_printf("salut tout le monde %c", '!');
	printf("%d", i);
	return (0);
}
