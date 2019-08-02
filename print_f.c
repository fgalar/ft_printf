/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2019/08/02 08:35:13 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		print_f(t_data *data)
{
	double	n;
	char	*nb;
	int		i;

	n = va_arg(data->arg, double); 
	
	nb = itoa_base(n, 10);
	nb[ft_strlen(nb)] = '.';
	ft_strcat(data->buffer, nb); 
	
	n *= 1000000;
	nb = itoa_base(n, 10);
	i = ft_strlen(nb);
	i -= 6;
	ft_strcat(data->buffer, &nb[i]); 
	
	return (0);
}
