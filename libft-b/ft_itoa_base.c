/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:59:15 by fanny             #+#    #+#             */
/*   Updated: 2019/07/21 14:30:07 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	conv_len(long long n, int base)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		if (base == 10)
		{
			len++;
			n *= -1;
		}
		while (base != 10 && n < 0)
		{
			len += 8;
			n /= 100000000000;
		}
	}
	while (n > 0 && (n /= base))
		++len;
	if (n >= 0 && n <=9)
		len++;
	return (len);
}

void	convert(long long n, int b, char *nb, int i)
{
	char	*base = "0123456789abcdef";
	
	if (n >= b || n <= -b)
		convert(n / b, b, nb, (i - 1));
	nb[i] = base[n % b];
}

char	*itoa_base(long long n, int base)
{
	int		len;
	char	*nb;

	len = conv_len(n, base);
	if (base < 2 || base > 16 
			|| !(nb = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0 && base == 10)
	{
		nb[0] = '-';
		n *=-1;
	}
	convert(n, base, nb, (len - 1));
	nb[len] = '\0';
	return (nb);
}
