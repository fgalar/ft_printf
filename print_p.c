/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:27:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/17 16:55:34 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
int		print_p(t_data *data)
{
	void *adress;

	adress = va_arg(data->arg, void*);
	write(1, &adress, 1);
	return 0;
}
