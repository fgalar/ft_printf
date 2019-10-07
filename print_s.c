/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:52:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/10/07 16:33:36 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static char	*precis_str(t_data *d, char *s)
{
	int		len;
	int		i;
	char	*arg;

	len = d->precis;
	i = 0;
	arg = (char*)malloc(sizeof(char) * (d->precis + 1));
	if (!d->precis)
		return (s = "0");
	while (len > i)
	{
		arg[i] = s[i];
		i++;
	}
	if (d->precis == d->width_max)
	{
		if (d->field)
			d->width_max = d->field;
		else
			d->width_max = 0;
	}
	d->precis = 0;
	d->flag[point] = 0;
	return (arg);
}

int			print_s(t_data *data)
{
	char	*s;

	s = va_arg(data->arg, char*);
	if (!s)
		s = "(null)";
	if (data->flag[point])
		s = precis_str(data, s);
	if (s)
	{
		manage_size(data, s);
		ft_strcat(data->buffer, data->argument);
		data->len = ft_strlen(data->buffer);
	}
	data->conv = 0;
	return (0);
}
