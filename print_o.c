/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:59:07 by fanny             #+#    #+#             */
/*   Updated: 2019/07/23 17:51:15 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int		print_o(t_data *data)
{
	char	*oct;

	oct = itoa_base((unsigned)va_arg(data->arg, int), 8);
	ft_strcat(data->buffer, oct);
	data->len = ft_strlen(data->buffer);
	return (0);	
}
