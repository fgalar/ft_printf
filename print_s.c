/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:52:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/17 16:14:51 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"


int		print_s(t_data *data)
{
	char	*s;

	s = va_arg(data->arg, char*);

	ft_strcat(data->buffer, s);
	data->len += ft_strlen(s);
	data->index++;
	return (0);
}