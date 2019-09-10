/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/09/10 07:43:34 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void		print_prefix(t_data *d, int arg_size, char *arg)
{
	int	space;
	char	*prefix;

	space = 0;
	if (d->conv == 'd')
		prefix = "+";
	if (d->conv == 'x' || d->conv == 'X')
		prefix = "0x";
	if (d->conv == 'o')
		prefix = "0";
	while (d->argument[space] == '-' && d->argument[space])
		space++;
	space -= ft_strlen(prefix);
	arg_size > 1 ? space -=1 : space;
	if (d->flag[less])
	{
		ft_strcat(d->buffer, prefix);
		ft_strcat(arg, d->argument);
		arg[space + arg_size] = '\0';
		ft_strcpy(d->argument, arg);
	}
	if (!d->flag[less])	
		ft_strcpy(&d->argument[space], prefix);
}

void		manage_size(t_data *d, char *arg)
{
//	printf("widthness = %d|| precision = %d || width_max = %d\ndata->flag[point] = %d\ndata->precision = %d\ndata->conv = %c\ndata->zero = %d\ndata->less = %d\n", d->widthness, d->precis, d->width_max, d->flag[point], d->precis, d->conv, d->flag[zero], d->flag[less]);
	
	int		len;
	int		m_size;
	int		field;
	int		precis;
	
	len = ft_strlen(arg);
	m_size = d->width_max;
	field = d->widthness;
	precis = d->precis;
	if (m_size < len)
		m_size = len;
	if ((d->flag[zero] && d->flag[less])
		|| (d->flag[point] && !ft_strcmp(arg, "0") && !precis))
		d->flag[zero] = 0;
	if (d->flag[point] && !ft_strcmp(arg, "0") && !precis)
		arg = " ";
	if (field && !d->flag[zero])
		ft_memset(d->argument,'-', (field - 1));	
	if ((d->flag[point] && precis) || d->flag[zero])
		precis ? ft_memset(&d->argument[m_size - precis], '0', precis) 
: ft_memset(d->argument, '0', (m_size - len));
	if (d->flag[diese] || (d->flag[most] && !ft_strcmp(arg, "0") && d->conv == 'd'))
		print_prefix(d, len, arg);
	if ((ft_strcmp(arg, "0") || !d->flag[point]) && !d->flag[less])
		ft_strcpy(&d->argument[m_size - len], arg);
}

int		dispatcher(t_data *data)
{
	int			x;
	static char	conv[NB_CONV] = {'c', 's', 'p', 'd', 'i', 'o', 'u', 'x', 'X',
		'f'};
	static int	(*go_ft[NB_CONV])(t_data *data) = {print_c, print_s, print_p,
		print_d, print_d, print_o, print_u, print_x, print_x, print_f};

	x = 0;
	while (conv[x] != data->conv)
		x++;
	if (conv[x] == data->conv && x < NB_CONV)
		return ((go_ft[x])(data));
	return (0);
}
