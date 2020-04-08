/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 15:38:49 by fgarault          #+#    #+#             */
/*   Updated: 2020/03/25 16:01:46 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int		purge_buff(t_data *d)
{
	write(1, d->buffer, d->len);
	ft_bzero(d->buffer, d->len);
	d->size += d->len;
	d->len = 0;
	return (d->size);
}

int		print_buff(char	*s, t_data *d)
{
	int		len;
	int		len_p;
	char	a;
	int		i;

	d->precis < (int)ft_strlen(s) && d->flag[point]? (len = d->precis) : (len = ft_strlen(s));
	d->field > len ? (len_p = d->field - len) : (len_p = 0);
	d->flag[zero] && !d->flag[less] ? (a = '0'): (a = ' ');
	i = -1;
	purge_buff(d);
	if ((d->flag[zero] || d->field) && !d->flag[less])
	{
		while (len_p > ++i)
			write(1, &a, 1);	
	}	
	i = -1;
	write(1, s, len);
	if (d->flag[less])
	{
		while (len_p > ++i)
			write(1, &a, 1);
	}
	return (d->size += len + len_p);
}
