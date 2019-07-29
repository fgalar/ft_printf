/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:48:00 by fgarault          #+#    #+#             */
/*   Updated: 2019/07/29 19:55:13 by fanny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

void	print_len(int	i, int y)
{
	ft_putstr("taille ft_printf\t");
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putstr("taille printf\t\t");
	ft_putnbr(y);
	ft_putchar('\n');
}

int main()
{
	int			i;
	int			y;

	ft_printf("***** FAKING PRINTF **********************************************\n");
	i = ft_printf("adresse de i :%p et y : %p\t%s %c%c\n", &i, &y, "salut", '!', '?');
	printf("***** TRUE PRINTF ******\n");
	y = printf("adresse de i :%p et y : %p\t%s %c%c\n", &i, &y, "salut", '!', '?');
	print_len(i, y);


	ft_printf("***** FAKING PRINTF CONVERSION d ********************************\n");
	i = ft_printf("%d\t%d\t%d\t%d\t%d\n", INT_MIN, INT_MAX, 0, 42, -56);
	printf("***** TRUE PRINTF *****\n");
	y = printf("%d\t%d\t%d\t%d\t%d\n", INT_MIN, INT_MAX, 0, 42, -56);
	print_len(i, y);
	
	ft_printf("****** FAKING PRINTF CONVERSION i ********************************\n");
	i = ft_printf("%i\t%i\t%i\t%i\t%i\n", INT_MIN, INT_MAX, 0, 42, -56);
	printf("***** TRUE PRINTF ******\n");
	y = printf("%i\t%i\t%i\t%i\t%i\n", INT_MIN, INT_MAX, 0, 42, -56);
	print_len(i, y);

	ft_printf("***** FAKING PRINTF CONVERSION o *********************************\n");
	i = ft_printf("%o\t%o\t%o\t%o\t%o\n", INT_MIN, INT_MAX, 0, 42, -56);
	printf("***** TRUE PRINTF ******\n");
	y = printf("%o\t%o\t%o\t%o\t%o\n", INT_MIN, INT_MAX, 0, 42, -56);
	print_len(i, y);	
	
	ft_printf("***** FAKING PRINTF CONVERSION u *******************************\n");
	i = ft_printf("%u\t%u\t%u\t%u\t%u\n", INT_MIN, INT_MAX, 0, 42, -56);
	printf("***** TRUE PRINTF ******\n");
	y = printf("%u\t%u\t%u\t%u\t%u\n", INT_MIN, INT_MAX, 0, 42, -56);
	print_len(i, y);

	ft_printf("***** FAKING PRINTF CONVERSION x *********************************\n");
	i = ft_printf("%x\t%x\t%x\t%x\t%x\n", INT_MIN, INT_MAX, 0, 42, -56);
	printf("***** TRUE PRINTF ******\n");
	y = printf("%x\t%x\t%x\t%x\t%x\n", INT_MIN, INT_MAX, 0, 42, -56);
	print_len(i, y);

	ft_printf("***** FAKING PRINTF CONVERSION X *********************************\n");
	i = ft_printf("%X\t%X\t%X\t%X\t%X\n", INT_MIN, INT_MAX, 0, 42, -56);
	printf("***** TRUE PRINTF ******\n");
	y = printf("%X\t%X\t%X\t%X\t%X\n", INT_MIN, INT_MAX, 0, 42, -56);
	print_len(i, y);


	ft_printf("***** FAKING PRINTF CONVERSION FLAGS *********************************\n");
	ft_printf("get the hh = %hhd\nget the h = %hd\n ok", SHRT_MAX, SHRT_MIN);
	
	printf("***** TRUE PRINTF ******\n");
	printf("hh = %hd\t%hd\n", SHRT_MAX, SHRT_MIN);
	printf("d = %d\t%d\n", SHRT_MAX, SHRT_MIN);
	
	return 0;
}
