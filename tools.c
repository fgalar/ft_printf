/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 05:46:24 by fanny             #+#    #+#             */
/*   Updated: 2019/09/28 20:42:29 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_new_arg(t_data *d)
{
	d->conv = 0;
	ft_bzero(d->flag, sizeof(d->flag));
	d->precis = 0;
	d->field = 0;
	d->width_max = 0;
	ft_bzero(d->argument, sizeof(d->argument));
	d->neg = 0;
	ft_bzero(d->prefix, sizeof(d->prefix));
	d->prfx = 0;
	d->ad_pf = 0;
}
