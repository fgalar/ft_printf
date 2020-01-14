/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2020/01/14 20:44:30 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_f(t_data *data)
{
	double			n;

	n = va_arg(data->arg, double);
	ft_strcat(data->buffer, ft_float(data, n));
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
