/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 16:15:40 by fanny             #+#    #+#             */
/*   Updated: 2019/08/22 10:00:51 by fanny            ###   ########.fr       */
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
	char		base[2] = {'0', '1'};
	int			i = 0;
	facto = (nb / ft_power(2, ft_log(nb))) - 1; //	calcul du mantisse
	while (facto != 0)
	{
		printf("facto = %f\n", facto);
		facto *= 2;
		*tab++ = base[(int)facto];
		if (facto >=1)
			facto -= 1;
		i++;
	}
}

int		print_f(t_data *data)
{
	int				sign;
	double			n;
	char			*exp;
	char			*mantissa;
	sign = 1;
	n = va_arg(data->arg, double);
	if (n < 0)
		sign = -1;
	exp = itoa_base((ft_log(n) + 127), 2);      // on recupere l'exposant
	mantissa = get_mantissa(n);
	printf("exp = %s\n", exp);
	printf("mantissa = %s\n", mantissa);
	return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	//printf("Power = %d\n", ft_log(atoi(av[1])));
	
	ft_printf("%f\n", 263.3);
	printf("%f\n", 263.3);
	return (0);
}
