/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/08/29 16:26:42 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	manage_size(t_data *data, char *arg)
{
	int		len;

	len = data->size - ft_strlen(arg);
	if (len < 0)
		return ;
	if (data->conv == 0 && (data->flag[most] || data->flag[diese] || data->flag[space]))
		len--;
	if (data->flag[point])
		ft_memset(&data->buffer[data->len],'0', len);
	else
		ft_memset(&data->buffer[data->len],' ', len);
	data->len += len;
}

void	get_size(t_data *data, const char *format)
{
	int		i;

	i  = 0;
	if (data->flag[point])
		data->size = ft_atoi(&format[data->index]);
	else
		data->size = ft_atoi(&format[data->index]);
	data->index += ft_nbrlen(data->size);
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
