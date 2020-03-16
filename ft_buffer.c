/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 15:38:49 by fgarault          #+#    #+#             */
/*   Updated: 2020/03/14 12:25:28 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		purge_buff(t_data *d)
{
	write(1, d->buffer, d->len);
	ft_bzero(d->buffer, d->len);
	d->size += d->len;
	return (d->size);
}

int		print_buff(char	*s, t_data *d)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
	return (d->size += len);
}
