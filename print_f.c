/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2020/01/23 16:48:07 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reinit_precis(t_data *d)
{
	d->precis = 0;
	d->flag[point] = 0;
	d->width_max = d->field;
	if (d->flag[most])
	{
		d->prfx = 1;
		ft_strcpy(d->prefix, "+");
	}
}

int		print_f(t_data *data)
{
	double			n;
	char			f[100];

	n = va_arg(data->arg, double);
	
	ft_strcpy(f, ft_float(data, n));
	reinit_precis(data);
	//printf("%d\n", data->flag[most]);	
	manage_size(data, f);
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
