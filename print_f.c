/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2019/11/18 18:09:47 by fgarault         ###   ########.fr       */
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

char	*get_mantissa(float nb, char *tab)
{
	float		facto;
	int			i;
	
	facto = (nb / ft_power(2, ft_log(nb)) -1); //	calcul du mantisse x = nb/2^log
	i = 0;
	while (i < 64) // a changer apres pour les double = 52bits
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
	float			n;
	t_float			*nb;

	n = (float)va_arg(data->arg, double);
	if (!(nb = ((t_float*)malloc(sizeof(t_float))))
				|| !(nb->exponent = (char*)malloc(sizeof(char) * 16))
				|| !(nb->mantissa = (char*)malloc(sizeof(char) * 65)))
		return (0);
	if (n < 0)
		nb->sign = 1;
	else
		nb->sign = 0;
	nb->exp = ft_log(n);
//	printf("sign = %d\n", nb->sign);
	nb->exponent = itoa_base((nb->exp + 16383), 2); // exp -> str
//	printf("exp = %s\n", nb->exponent);
	
	nb->mantissa = get_mantissa(n, nb->mantissa);
//	printf("mantissa = %s\n", nb->mantissa);
	ft_strcat(data->buffer, ft_ftoa(data, nb));
	data->len += ft_strlen(data->buffer);
	return (0);
}
