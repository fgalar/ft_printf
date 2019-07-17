/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:29:05 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/17 18:27:14 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_itoa(long long n)
{
	char				*nbr;
	int					i;
	unsigned long long	nb;

	i = ft_nbrlen(n);
	if (!(nbr = ft_strnew(i)))
		return (NULL);
	if (n <= 0)
	{
		if (n == 0)
		{
			nbr[0] = '0';
			return (nbr);
		}
		nbr[0] = '-';
		n *= -1;
	}
	nbr[i] = '\0';
	nb = n;
	while (i > 0 && nb > 0)
	{
		nbr[--i] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (nbr);
}
