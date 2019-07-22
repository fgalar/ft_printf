/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:27:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/22 10:13:13 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include "libft-b/libft.h" 
#include <stdio.h>
int		print_p(t_data *data)
{
	long long *adress;

	adress = va_arg(data->arg, void*);
	
	puts(itoa_base((unsigned long long)adress, 16));

	return 0;
}


