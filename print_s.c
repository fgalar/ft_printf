/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:52:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/15 15:55:42 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "ft_printf.c"

int		print_s(t_data *data)
{
	char *s;

	s = va_arg(data->arg, char*);
	ft_strcat(&data->buffer[data->len], s);
	ft_putstr(data->buffer);
	data->conv = 0;
	return (0);
}
