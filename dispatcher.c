/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/09/05 12:44:48 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void		manage_size(t_data *data, char *arg)
{
	int		len;

	len = data->width_max - ft_strlen(arg);
	if (len < 0)
		return ;
	if (data->flag[most] || data->flag[diese] || data->flag[space])
		len--;
	if ((data->conv == 'x' || data->conv == 'X') && data->flag[diese])
		len--;
	if ((data->flag[point] || data->flag[zero]) && !data->flag[less])
		ft_memset(&data->buffer[data->len],'0', len);
	else
		ft_memset(&data->buffer[data->len],' ', len);
	data->len += len;
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
