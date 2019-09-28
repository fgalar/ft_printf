/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/09/28 07:30:46 by fanny            ###   ########.fr       */
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
	/*localisation et placement du prefix*/
	/*printf("flag[less] = %d\tflag[zero] = %d\nd->precis = %d\tlen_t = %d\tlen_p = %d\tlen_arg= %d\n", d->flag[less], d->flag[zero], d->precis, len_t, len_p, len_arg);*/
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
	if (d->flag[point] && !d->width_max && !ft_strcmp(arg, "0"))
		return (0);
	if ((d->conv == 'd' && ((d->flag[most]) ||  d->flag[space] || d->neg)
			&& (d->prfx = 1)))
		len++;
	if (d->flag[diese] && ft_strcmp(arg, "0") && !(d->conv == 'u'))
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
	
	d->argument[len] = '\0';
	//gestion des exclusions
	if ((d->flag[zero] && d->flag[less]) || d->flag[point]) 
		d->flag[zero] = 0;
	
	if (d->flag[space] && !d->field && !d->neg
		 && (d->prfx = 1) && (d->prefix[0] = ' ') && (d->ad_pf = 1))
		d->field = d->precis + 1;

	memset(d->argument, ' ', len);
	 /*remplissage du champs*/
	/*if (d->field && !d->flag[zero])*/
		/*ft_memset(d->argument,'*', sizeof(char) * d->field);*/
	
	// remplissage du prefix
	if ((d->flag[diese] && ft_strcmp(arg, "0"))
				|| d->neg || (d->flag[most] && d->conv == 'd'))
		get_prefix(d, len, len_brut);
	len_p = ft_strlen(d->prefix);	
	/*remplissage de la precision*/
	int	width_z;
	if (d->precis >= (len_brut + len_p) || d->flag[zero])
	{
		if (!d->prfx && !d->flag[less] && d->precis)
			d->ad_pf = len - d->precis;
		if (!d->precis && d->flag[zero])
			width_z = len - len_p; // avant len = d->field
		else
			width_z = d->precis;
		/*printf("d->flag[less] = %d\td->flag[zero]= %d\nd->ad_pf = %d len = %d\n", d->flag[less], d->flag[zero], d->ad_pf, len);*/
		ft_memset(&d->argument[d->ad_pf], '0', width_z);
		d->ad_pf += width_z; // place du pointeur apres ajout des 0000
		/*printf("ad_pf + width ===>>%d\n", d->ad_pf);*/
	}

	/*Placement argument*/
	//printf("d->precis = %d\t len= %d\tlen_brut = %d\t\n",d->precis,len, len_brut);
	if (!(!ft_strcmp(arg, "0") && d->flag[point] && !d->precis && (d->conv == 'x' || d->conv == 'X')))
	{	
		if (d->flag[less])
		{
			if (!d->precis)             // car si pas precision va ecrire sur prefix
				len_p += len_brut;
			ft_strncpy(&d->argument[(len_p+d->precis) - len_brut], arg, len_brut);
		}
		else if (d->precis > (len_brut + len_p))
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
