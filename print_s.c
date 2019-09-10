/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:52:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/09/09 13:21:27 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

char		*precis_str(t_data *d, char *s)
{
	int	len;
	int	i;
	char	*arg;
	
	len = d->precis;
	i = 0;
	arg = (char*)malloc(sizeof(char) * (d->precis + 1));
	while (len > i)
	{
		arg[i] = s[i];
		i++;
	}
	return (arg);
}

int		print_s(t_data *data)
{
	char	*s;

	s = va_arg(data->arg, char*);
	if (data->precis && data->flag[point] )
		s = precis_str(data, s);	

	manage_size(data, s);
	ft_strcat(data->buffer, data->argument);
	
	data->len = ft_strlen(data->buffer);
	return (0);
}
