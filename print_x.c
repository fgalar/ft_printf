/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:57:47 by fanny             #+#    #+#             */
/*   Updated: 2019/09/10 18:26:57 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_majhex(char *nb)
{
	int		i;

	i = 0;
	while (nb[i])
	{
		if (ft_isalpha(nb[i]))
			nb[i] = splitmin_maj(nb[i]);
		i++;
	}
}

int		print_x(t_data *data)
{
	char	*nb;
	char	*prefix;

	prefix = "0x";
	if (data->flag[hh])
		nb = itoa_base((unsigned char)va_arg(data->arg, unsigned), 16);
	else if (data->flag[h])
		nb = itoa_base((unsigned short)va_arg(data->arg, unsigned), 16);
	else if (data->flag[ll] || data->flag[l])
		nb = itoa_base(va_arg(data->arg, unsigned long), 16);
	else
		nb = itoa_base(va_arg(data->arg, unsigned), 16);
	if (data->flag[less] && !data->flag[diese])
	{
		strcat(data->buffer, nb);
		if (data->widthness)
			data->widthness -= (ft_strlen(nb) - 1);
	}
	manage_size(data, nb);
	if (data->conv == 'X')
		print_majhex(data->argument);
	if (ft_strcmp(nb, "0") || (!ft_strcmp(nb, "0") && !data->flag[point]) || data->width_max)
		ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	/*if (data->flag[less] && data->width_max)*/
		/*manage_size(data, nb);*/
	data->conv = 0;
	return (0);
}
