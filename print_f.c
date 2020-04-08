/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2020/03/21 15:16:58 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	reinit_precis(t_data *d)
{
	d->precis = 0;
	d->flag[point] = 0;
	d->width_max = d->field;
	d->flag[diese] = 0;
	if (d->flag[most])
	{
		d->prfx = 1;
		ft_strcpy(d->prefix, "+");
	}
}

int			print_f(t_data *data)
{
	long double		n;
	char			f_char[4096];
	t_float			f_nbr;

	if (data->flag[ll])
		n = va_arg(data->arg, long double);
	else
		n = va_arg(data->arg, double);
	f_nbr.fl = n;
	ft_bzero(f_char, 4096);
	f_nbr.b_count.sign ? (data->neg = 1 && ft_strcat(data->prefix, "-")) : 0;
	if (f_nbr.b_count.exp == 0b111111111111111)
	{
		data->flag[zero] = 0;
		ft_strcat(f_char, "inf");
	}
	else
		ft_strcpy(f_char, ft_float(data, n));
	reinit_precis(data);
	handler(data, f_char);
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	data->conv = 0;
	return (0);
}
