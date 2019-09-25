/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/09/25 16:36:17 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// POSTULAT : ICI, le buffer n'est EN AUCUN CAS modifiable.
// print_prefix => defini et entre le prefix dans d->argument

void		get_prefix(t_data *d, int len_t, int len_arg)
{
	int		len_p;
	//definition du prefix
	if (d->conv == 'd' && (d->neg || d->flag[most]))
		d->neg ? ft_strcpy(d->prefix, "-") : ft_strcpy(d->prefix,"+");
	if (d->conv == 'o')
		ft_strcpy(d->prefix, "0");
	if (d->conv == 'x' || d->conv == 'X')
		d->conv == 'x'? ft_strcpy(d->prefix, "0x") : ft_strcpy(d->prefix, "0X");
	len_p = ft_strlen(d->prefix);
	/*localisation du prefix*/
	printf("len_total = %d\tlen_arg = %d\t\t", len_t, len_arg);
	if (d->flag[less] || d->flag[zero])
		ft_strncpy(d->argument, d->prefix, len_p);
	else if (d->precis)
		ft_strncpy(&d->argument[(len_t - 1) - d->precis], d->prefix , len_p);
	else
	{
		ft_strncpy(&d->argument[len_t - (len_arg + len_p)], d->prefix, len_p);
		printf("%d && arg = %s\n", len_t - (len_arg + len_p), d->argument);
	}
	
}

// get_arg_size : defini la taille complete de l'argument avec flag et prefix.
int			get_arg_size(t_data *d, char *arg)
{
	int len;
	int	prefix;

	len = ft_strlen(arg);
	prefix = 0;
	if (d->flag[point] && !d->width_max && !ft_strcmp(arg, "0"))
		return (0);
	if (d->conv == 'd' && ((d->flag[most]) ||  d->flag[space] || d->neg))
	{
		len++;
		prefix = 1;
	}
	if (d->flag[diese] && ft_strcmp(arg, "0") 
		&& (d->conv == 'd' || d->conv == 'o' || d->conv == 'x' || d->conv == 'X'))
	{
		if (d->conv == 'x' || d->conv == 'X')
			len += 2;
		else if (d->conv == 'd' || d->conv == 'o')
			len++;
		prefix = 1;
	}
	if (len < d->width_max)
		len = d->width_max;
	if (d->precis && d->precis == d->width_max && prefix)
		d->conv == 'x' | d->conv == 'X' ? len += 2 : len++;
	return (len);
}

// manage size => defini et entre le remplissage des 0 ou [SPCE] dans d->argument

void		manage_size(t_data *d, char *arg)
{
	int		len;
	int		len_brut;
	
	len = get_arg_size(d, arg);
	len_brut = ft_strlen(arg);
	d->argument[len] = '\0';
	if (d->flag[zero] && d->flag[less])
		d->flag[zero] = 0;
	if (d->flag[space] && !d->field)
		d->field = d->precis + 1;

	memset(d->argument, '_', len);
	
	if ((d->flag[diese] && ft_strcmp(arg, "0")) 
				|| ((d->flag[most] || d->neg) && d->conv == 'd'))
		get_prefix(d, len, len_brut);
	printf("d->prefix = %s et len = %d\n", d->prefix, len);
//	if (d->conv == 'd' && !d->neg && d->flag[space] && !field && !d->flag[most])
//	{
//		field = len + 1;
//		m_size++;
//	}
//	if ((d->flag[zero] && (d->flag[less] || (d->flag[point] && !d->precis)))
//		|| (d->flag[point] && !ft_strcmp(arg, "0") && !d->precis))
//		d->flag[zero] = 0;
//	
//	if (d->flag[point] && !ft_strcmp(arg, "0") && !precis)
//		arg = " ";
//
//	if (d->widthness && !d->flag[zero])
//		ft_memset(d->argument,' ', (d->widthness - 1));
//	if ((d->flag[point] && d->precis) || d->flag[zero])
//		d->precis ? ft_memset(&d->argument[d->width_max - d->precis], '0', d->precis) 
//: ft_memset(d->argument, '0', (d->width_max - len));
//
//	if ((d->flag[diese] && ft_strcmp(arg, "0"))|| ((d->flag[most] || d->neg) && d->conv == 'd'))
//		print_prefix(d, len, arg);
//	if ((ft_strcmp(arg, "0") || !d->flag[point]) && !d->flag[less])
//		ft_strcpy(&d->argument[m_size - len], arg);
}

int		dispatcher(t_data *data)
{
	int			x;
	static char	conv[NB_CONV] = {'c', 's', 'p', 'd', 'o', 'u', 'x', 'X',
		'f'};
	static int	(*go_ft[NB_CONV])(t_data *data) = {print_c, print_s, print_p,
		print_d, print_o, print_u, print_x, print_x, print_f};

	x = 0;
	if (data->conv == 'i')
		data->conv = 'd';
	while (conv[x] != data->conv)
		x++;
	if (conv[x] == data->conv && x < NB_CONV)
		return ((go_ft[x])(data));
	return (0);
}
