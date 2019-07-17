/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:26:59 by fanny             #+#    #+#             */
/*   Updated: 2019/07/16 15:51:27 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_c(t_data *data)
{
	int	c;

	c = va_arg(data->arg, int);
	data->buffer[data->len] = (unsigned char)c;
	
	data->index++;
	data->len++;
	return (0);
}
