/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:11 by fanny             #+#    #+#             */
/*   Updated: 2019/07/22 15:20:18 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
int		print_d(t_data *data)
{
	char	*nb;

	nb = ft_itoa(va_arg(data->arg, int));
	ft_strcat(data->buffer, nb);
	data->len = ft_strlen(data->buffer);
	return (0);
}
