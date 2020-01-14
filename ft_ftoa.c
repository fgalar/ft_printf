/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:54:18 by fanny             #+#    #+#             */
/*   Updated: 2020/01/14 20:52:13 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int		ft_floatlen(double f, int precision)
{
	int		len;

	len = precision + 1;
	if (f <=1.00)
		return (len + 1);
	while (f >= 1.0)
	{
		len++;
		f /= 10;
	}
	return (len);
}

void	ft_round(char *tab)
{
	int		i;

	i = strlen(tab) - 1;
	printf("reste = %s\n", tab);
	while (i + 1> 0)
	{
		tab[i] += 1;
		if (!ft_isdigit(tab[i]))
		{
			tab[i] = '0';
			i--;
		}
		else
			return ;
	}
}

void	memset_integer_part(char *tab, double *f, int len)
{
	int		i;

	i = 0;
	while (*f > 10.0)
		*f /= 10;
	while (len > i)
	{
		tab[i] = (int)*f + '0';
		*f -= (int)*f;
		*f *= 10;
		i++;
	}
}

void	memset_decimal_part(char *tab, double f, int precision)
{
	int		i;

	i = 0;
	while (i < precision)
	{
		tab[i] = (int)f + '0';
		f -= (int)f;
		f *= 10;
		i++;
	}
	while (f > 5)
	{
		f /= 10;
		ft_round(tab);
	}
}


char	*ft_float(t_data *d, double f)
{
	int		len;
	char	*tab;

	if (!d->precis)
		d->precis = 6;
	len = ft_floatlen(f, d->precis);
	tab = (char*)malloc(sizeof(char) * (len + 1));
	tab[len] = '\0';
	ft_memset(tab, '0', len);
	memset_integer_part(tab, &f, len - (d->precis + 1));
	tab[len - (d->precis + 1)] = '.';
	memset_decimal_part(&tab[len - d->precis], f, d->precis);
	return (tab);
}
