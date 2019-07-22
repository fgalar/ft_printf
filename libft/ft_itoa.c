/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:29:05 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/22 15:48:49 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(long long n)
{
	char				*nbr;
	int					i;
	unsigned long long	nb;

	i = ft_nbrlen(n);
	ft_putnbr(i);
	ft_putchar('\n');
	if (!(nbr = ft_strnew(i)))
		return (NULL);
	if (n <= 0)
	{
		if (n == 0)
			return ("0");
		nbr[0] = '-';
		n *= -1;
	}
	nbr[i] = '\0';
	nb = n;
	while (nb > 0)
	{
		nbr[--i] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (nbr);
}
