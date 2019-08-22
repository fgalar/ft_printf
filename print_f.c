/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2019/08/23 00:56:01 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
	
	tab = (char*)malloc(sizeof(char) * (sizeof(double) + 1));
	facto = (nb / ft_power(2, ft_log(nb)) -1); //	calcul du mantisse
	i = 0;
	while (facto != 0 && i < 23)
	{
		facto += facto;
		if (facto > 1)
		{
			tab[i] = '1';
			facto -= 1;
		}
		else
			tab[i] = '0';
		i++;
	}
	return(tab);
}

int		print_f(t_data *data)
{
	double			n;
	t_float			*nb;

	n = va_arg(data->arg, double);
	if (!(nb = ((t_float*)malloc(sizeof(t_float))))
				|| !(nb->exponent = (char*)malloc(sizeof(char) * 9))
				|| !(nb->mantissa = (char*)malloc(sizeof(char) * 24)))
		return (0);
	if (n < 0)
		nb->sign = '1';
	else
		nb->sign = '0';
	printf("%c\n", nb->sign);
	nb->exponent = itoa_base((ft_log(n) + 127), 2); // exp -> str
	printf("exp = %s\n", nb->exponent);
	
	nb->mantissa = get_mantissa(n, nb->mantissa);
	printf("mantissa = %s\n", nb->mantissa);

	return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	//printf("Power = %d\n", ft_log(atoi(av[1])));
	
	ft_printf("%f\n", 89.62);
	printf("%f\n", 89.62);
	return (0);
}
