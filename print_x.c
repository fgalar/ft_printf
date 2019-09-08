/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:57:47 by fanny             #+#    #+#             */
/*   Updated: 2019/09/07 20:17:15 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*print_majhex(char *nb)
{
	int		i;

	i = 0;
	while (nb[i])
	{
		if (ft_isalpha(nb[i]))
			nb[i] = splitmin_maj(nb[i]);
		i++;
	}
	return (nb);
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
	/*if (!data->precis && !ft_strcmp(nb, "0") && data->flag[point])*/
		/*return (0);	*/
	manage_size(data, nb);
	//if (data->flag[diese] && ft_strcmp(nb, "0") && (data->flag[point] || data->flag[zero]))
	//	data->conv == 'X'? ft_strcat(data->buffer, "0X") : ft_strcat(data->buffer, "0x");
	/*if (data->conv == 'X')*/
		/*nb = print_majhex(nb);*/
	ft_strcat(data->buffer, data->argument);
	data->len = ft_strlen(data->buffer);
	/*if (data->flag[less] && data->width_max)*/
		/*manage_size(data, nb);*/
	data->conv = 0;
	return (0);
}
