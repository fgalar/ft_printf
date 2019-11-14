/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2019/11/14 19:02:30 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>

int		ft_log(double value)
{
	int index;
	int log;

	index = 0;
	log = 2;
	while (value > log)
	{
		log +=log;
		index++;
	}
	return (index);
}

char	*get_mantissa(double nb, char *tab)
{
	double		facto;
	int			i;
	
	facto = (nb / ft_power(2, ft_log(nb)) -1); //	calcul du mantisse x = nb/2^log
	i = 0;
	while (i < 52) // a changer apres pour les double = 52bits
	{
		facto += facto;
		if (facto >= 1)
		{
			tab[i] = '1';
			facto -= 1;
		}
		else
			tab[i] = '0';
		i++;
	}
	tab[i]= '\0';
	return(tab);
}

int		print_f(t_data *data)
{
	double			n;
	t_float			*nb;

	n = va_arg(data->arg, double);
	if (!(nb = ((t_float*)malloc(sizeof(t_float))))
				|| !(nb->exponent = (char*)malloc(sizeof(char) * 12))
				|| !(nb->mantissa = (char*)malloc(sizeof(char) * 53)))
		return (0);
	if (n < 0)
		nb->sign = 1;
	else
		nb->sign = 0;
	nb->exp = ft_log(n);
	printf("%d\n", nb->sign);
	nb->exponent = itoa_base((nb->exp + 1023), 2); // exp -> str
	printf("exp = %s\n", nb->exponent);
	
	nb->mantissa = get_mantissa(n, nb->mantissa);
//	printf("mantissa = %s\n", nb->mantissa);
	ft_ftoa(nb);
	free(nb);
	free(nb->exponent);
	free(nb->mantissa);
	return (0);
}
