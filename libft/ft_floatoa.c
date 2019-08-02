/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floatoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanny <fgarault@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 17:30:40 by fanny             #+#    #+#             */
/*   Updated: 2019/08/01 10:15:26 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include "libft.h"

char	*ft_floatoa(long double n)
{
	char	*s;
	
	s = NULL;
	(void)n;
	//s = itoa_base(n, 10);
	return (s);
}
int main()
{
	printf("\n%lf", 999999999.9999919);
	//ft_putstr(ft_floatoa(12345.67891));
	return (0);
}
