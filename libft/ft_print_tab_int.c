/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 22:20:54 by fgarault          #+#    #+#             */
/*   Updated: 2019/04/27 18:24:00 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab_int(int *tab, int size)
{
	int		i;

	i = 0;
	while (size > i)
	{
		ft_putnbr(tab[i]);
		ft_putchar('\t');
		i++;
	}
}
