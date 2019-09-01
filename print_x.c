/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:57:47 by fanny             #+#    #+#             */
/*   Updated: 2019/08/31 18:02:42 by fgarault         ###   ########.fr       */
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
	if (!data->size && !ft_strcmp(nb, "0"))
		return (0);	
	if (data->size && !data->flag[less])
		manage_size(data, nb);
	if (data->flag[diese])
		data->conv == 'X'? ft_strcat(data->buffer, "0X") : ft_strcat(data->buffer, "0x");
	if (data->conv == 'X')
		nb = print_majhex(nb);
	ft_strcat(data->buffer, nb);
	data->len = ft_strlen(data->buffer);
	if (data->flag[less] && data->size)
		manage_size(data, nb);
	data->conv = 0;
	return (0);
}
