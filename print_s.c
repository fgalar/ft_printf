/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:52:34 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/25 19:42:18 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

char		*precis_str(t_data *d)
{
	int	len;
	int	i;
	char	*arg;
	
	len = d->precis;
	i = 0;
	while (len > i)
	{
		arg[i] = d->argument[i];
		i++;
	}
	return (arg);
}

int		print_s(t_data *data)
{
	char	*s;
	char	*pre_s;

	s = va_arg(data->arg, char*);
	pre_s = s;
	if (data->precis && data->flag[point] )
	{	
		ft_strncpy(pre_s, s, data->precis);
		
		puts("eh h"); 
		printf("%d\n", data->precis);

	}

	//s[data->precis] = '\0';	
	data->precis = 0;
	manage_size(data, pre_s);
	ft_strcat(data->buffer, data->argument);
	
	data->len = ft_strlen(data->buffer);
	return (0);
}
