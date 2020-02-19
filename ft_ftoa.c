/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 11:54:18 by fanny             #+#    #+#             */
/*   Updated: 2020/02/19 21:05:55 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int		ft_floatlen(double f, int precision)
{
	int		len;

	precision ? len = precision + 1 : (len = 0);
	if (f < 0)
	{
		f *= -1.0;
		len++;
	}
	if (f <= 1.0)
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

	i = ft_strlen(tab) - 1;
	while (i + 1 > 0)
	{
		tab[i] += 1;
		if (!ft_isdigit(tab[i]))
		{
			tab[i] = '0';
			i--;
			if (tab[i] == '.')
			{
				i--;
				tab[i] += 1;
			}	
		}
		else
			return ;
	}
}

void	memset_integer_part(char *tab, double *f, int len)
{
	int		i;

	i = 0;
	if (*f < 0)
	{
		*f *= -1.0;
		tab[i] = '-';
		i++;
	}
	while (*f >= 10.0)
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
	if ((int)f > 5)
		ft_round(tab);
}

char	*ft_float(t_data *d, double f)
{
	int		len;
	char	*tab;

	if (!d->precis && !d->flag[point])
		d->precis = 6;
	len = ft_floatlen(f, d->precis);
	tab = (char*)malloc(sizeof(char) * (len + 1));
	tab[len] = '\0';
	ft_memset(tab, 0, len);
	memset_integer_part(tab, &f, len - (d->precis + 1));
	if (!d->precis && d->flag[point])
	{
		printf("%d\n", len);
		if (d->flag[diese])
			ft_strcat(tab, ".");
		return (tab);
	}
	tab[(len - 1) - d->precis] = '.';
	memset_decimal_part(&tab[len - d->precis], f, d->precis);
	return (tab);
}
