/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:24:26 by fanny             #+#    #+#             */
/*   Updated: 2019/07/14 19:51:56 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"


int	dispatcher(t_data *data)
{
	int		x;
	static char	conv[NB_CONV] = {'c'};
	static int	(*go_ft[2])(t_data *data) = {print_c, print_s};

	x = 0;
	while (conv[x] != data->conv)
		x++;
	if (conv[x] == data->conv)
		return ((go_ft[x])(data));
	return (0);
}
