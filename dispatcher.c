/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/08/07 10:24:43 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	check_overrides(const char *format, t_data *data)
{
	if (!ft_strcmp(data->flag, "%"))
	{
		ft_strcat(data->buffer, data->flag);
		data->len++;
	}
	if (!strcmp(data->flag, "#"))
	{
		//data->index++;
		puts("helo\n");
		data->prefix = 1;
	}
	
}
int		dispatcher(t_data *data)
{
	int		x;
	static char	conv[NB_CONV] = {'c','s','p','d','i','o','u','x','X'};
	static int	(*go_ft[NB_CONV])(t_data *data) = {print_c, print_s, print_p, 
		print_d, print_d, print_o, print_u, print_x, print_x};

	x = 0;
	while (conv[x] != data->conv)
		x++;
	if (conv[x] == data->conv && x < NB_CONV)
		return ((go_ft[x])(data));
	return (0);
}
