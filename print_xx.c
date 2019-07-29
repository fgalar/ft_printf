/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:05:50 by fanny             #+#    #+#             */
/*   Updated: 2019/07/24 19:35:38 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_xx(t_data *data)
{
	char	*nb;
	int		i;

	nb = itoa_base(va_arg(data->arg, unsigned), 16);
	i = 0;
	while (nb[i])
	{
		if (ft_isalpha(nb[i]))
			nb[i] = split_min(nb[i]);
		i++;
	}
	ft_strcat(data->buffer, nb);
	data->len = ft_strlen(data->buffer);
	return (0);
}
