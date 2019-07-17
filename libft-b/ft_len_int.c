/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 22:49:30 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/17 18:23:15 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbrlen(long long n)
{
	int					len;
	int					sign;
	unsigned long long	nb;

	len = 1;
	sign = -1;
	if (n < 0)
	{
		len++;
		n *= sign;
	}
	nb = n;
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
