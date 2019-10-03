/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:51:23 by fanny             #+#    #+#             */
/*   Updated: 2019/10/03 13:31:22 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		unbrlen(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned long nb)
{
	int		len;
	char	*n;

	len = unbrlen(nb);
	if (!(n = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	if (n == 0)
		n[0] = '0';
	n[len] = '\0';
	while (len)
	{
		n[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (n);
}
