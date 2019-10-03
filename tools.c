/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 05:46:24 by fanny             #+#    #+#             */
/*   Updated: 2019/10/03 16:51:35 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_majhex(char *nb)
{
	int		i;

	i = 0;
	while (nb[i])
	{
		if (ft_isalpha(nb[i]))
			nb[i] = splitmin_maj(nb[i]);
		i++;
	}
}

int		print_percent(t_data *d)
{
	manage_size(d, "%");
	strcat(d->buffer, d->argument);
	d->len += ft_strlen(d->argument);
	d->index++;
	return (0);
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
