/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:26:59 by fanny             #+#    #+#             */
/*   Updated: 2019/09/28 20:52:28 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(t_data *data)
{
	unsigned char	c;

	c = va_arg(data->arg, int);
	puts(&c);	
	if (c == '0' && puts("coucou"))
		c = '\0';
	manage_size(data, &c);
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	return (0);
}
