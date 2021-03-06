/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:47:09 by fgarault          #+#    #+#             */
/*   Updated: 2020/04/27 20:49:30 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	precis_float(t_data *d)
{
	if (d->flag[point] && !d->precis)
		d->precis -= 1;
	else if (!d->flag[point])
		d->precis = 6;
}
