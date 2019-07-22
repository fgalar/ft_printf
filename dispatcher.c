/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/07/22 15:58:11 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"


int	dispatcher(t_data *data)
{
	int		x;
	static char	conv[NB_CONV] = {'c','s','p','d','i','o'};
	static int	(*go_ft[NB_CONV])(t_data *data) = {print_c, print_s, print_p, print_d, print_d, print_o};

	x = 0;
	while (conv[x] != data->conv)
		x++;
	if (conv[x] == data->conv && x < NB_CONV)
	{	
		data->conv = 0;
		data->index++;
		return ((go_ft[x])(data));
	}
	return (0);
}
