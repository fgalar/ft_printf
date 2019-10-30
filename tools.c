/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:58:14 by fgarault          #+#    #+#             */
/*   Updated: 2019/10/30 13:43:17 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_majhex(char *nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (ft_isalpha(nb[i]))
			nb[i] = ft_toupper(nb[i]);
		i++;
	}
}

void	print_a(t_data *d)
{
	d->flag[z] ? manage_size(d, "Z") : manage_size(d, "%");
	d->precis = 0;
	d->flag[point] = 0;
	ft_strcat(d->buffer, d->argument);
	d->len += ft_strlen(d->argument);
	d->index++;
	d->conv = 0;
}

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
