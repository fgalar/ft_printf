/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:29:05 by fgarault          #+#    #+#             */
/*   Updated: 2019/10/30 10:45:33 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_itoa(int n)
{
	char				*nbr;
	int					i;
	unsigned int		nb;

	i = ft_nbrlen(n);
	if (!(nbr = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n == 0)
		nbr[0] = '0';
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	nbr[i] = '\0';
	nb = n;
	while (nb > 0)
	{
		nbr[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	free(nbr);
	return (nbr);
}
