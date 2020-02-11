/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 10:55:32 by fgarault          #+#    #+#             */
/*   Updated: 2019/04/25 20:38:27 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!(s1) || !(s2))
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}