/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/10/01 12:29:38 by fanny            ###   ########.fr       */
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
		ft_strcpy(d->prefix, "0x");
	len_p = ft_strlen(d->prefix);
	//printf("prefix = |%s\n", d->prefix);
	/*localisation et placement du prefix*/
	if (d->flag[less] || d->flag[zero])
	{
		ft_strncpy(d->argument, d->prefix, len_p);
		d->ad_pf = len_p;
	}
	else if (d->precis)
	{
		ft_strncpy(&d->argument[(len_t) - (d->precis + len_p)], d->prefix , len_p);
		d->ad_pf = ((len_t - 1) - d->precis) + len_p;
	}
	else
	{
		//printf("len_t = %d && len_arg = %d && len_p = %d\n", len_t, len_arg, len_p);
		ft_strncpy(&d->argument[(len_t) - (len_arg + len_p)], d->prefix, len_p);
		d->ad_pf = (len_t - 1) - (len_arg + len_p);
	}
	
}

// get_arg_size : defini la taille complete de l'argument avec flag et prefix.
int			get_arg_size(t_data *d, void *arg)
{
	int len;
	int	prefix;

	len = ft_strlen(arg);
	prefix = 0;
	if (d->flag[point] && !d->width_max && !ft_strcmp(arg, "0") && !(d->conv == 'o' && d->flag[diese]))
		return (0);
	if (d->conv == 'o' && d->flag[diese])
		len = 0;
	if ((d->conv == 'd' && ((d->flag[most]) ||  d->flag[space] || d->neg)
			&& (d->prfx = 1)))
		len++;
	if (d->flag[diese] && (ft_strcmp(arg, "0") || (d->conv == 'o')))
	{
		if (d->conv == 'x' || d->conv == 'X')
			len += 2;
		else
			len++;
		d->prfx = 1;
	}
	if (len < d->width_max)
		len = d->width_max;
	if (d->precis && d->precis == d->width_max && d->prfx)
		d->conv == 'x' | d->conv == 'X' ? len += 2 : len++;
	return (len);
}

// manage size => defini et entre le remplissage des 0 ou [SPCE] dans d->argument

void		manage_size(t_data *d, void *arg)
{
	int		len;
	int		len_brut;
	int		len_p;
	
	len = get_arg_size(d, arg);
	len_brut = ft_strlen(arg);
		//printf("len = %d\n", len);
	//gestion des exclusions
	if (!ft_strcmp(arg, "0") && !d->precis && d->flag[point])
		len_brut = 0; 
	if ((d->flag[zero] && d->flag[less]) || d->flag[point]) 
		d->flag[zero] = 0;
	if (d->flag[space] && !d->field && !d->neg
		 && (d->prfx = 1) && (d->prefix[0] = ' ') && (d->ad_pf = 1))
		d->field = d->precis + 1;
	memset(d->argument, ' ', len);
	// remplissage du prefix
	if (d->prfx)
		get_prefix(d, len, len_brut);
	len_p = ft_strlen(d->prefix);	
	/*remplissage de la precision*/
	int	width_z;
	if (d->precis >= (len_brut + len_p) || d->flag[zero]) // condition a revoir !!!!!
	{
		if ((!d->prfx || d->precis < d->field) && !d->flag[less] && d->precis)
			d->ad_pf = len - d->precis;
		if (d->flag[zero])
			width_z = len - len_p; // avant len = d->field
		else
			width_z = d->precis;
		ft_memset(&d->argument[d->ad_pf], '0', width_z);
		d->ad_pf += width_z; // place du pointeur apres ajout des 0000
	}
	/*Placement argument*/
	if (len_brut)
	{
		if (d->flag[less])
		{
			if (!d->precis)             // car si pas precision va ecrire sur prefix
				len_p += len_brut;
			ft_strncpy(&d->argument[(len_p+d->precis) - len_brut], arg, len_brut);
		}
		else if (d->precis > (len_brut + len_p) && d->precis > d->field)
			ft_strncpy(&d->argument[d->ad_pf - len_brut], arg, len_brut);
		else
			ft_strncpy(&d->argument[(len) - len_brut], arg, len_brut);
	}
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
