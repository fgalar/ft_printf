/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:48:00 by fgarault          #+#    #+#             */
/*   Updated: 2019/08/31 16:48:02 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

void	print_len(int	i, int y)
{
	ft_putchar('\t');
	ft_putstr("taille ft_printf\t");
	ft_putnbr(i);
	ft_putstr("\n\t");
	ft_putstr("taille printf\t\t");
	ft_putnbr(y);
	ft_putstr("\n\n");
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

	ft_printf("*****        flags       ****\n1.my_printf\n2.true printf\n\n");
	
	ft_printf("\t\t CONV d ! \t\t\n\n");
	i = ft_printf("1. hh = %hhd\t%hhd\n", SHRT_MAX, SHRT_MIN);
	y = printf("2. hh = %hhd\t%hhd\n", SHRT_MAX, SHRT_MIN);
	print_len(i, y);

	i = ft_printf("1. h = %hd\t%hd\n", SCHAR_MAX, SCHAR_MIN);
	y = printf("2. h = %hd\t%hd\n", SCHAR_MAX, SCHAR_MIN);
	print_len(i, y);

	i = ft_printf("1. ll = %lld\t%lld\n", LLONG_MAX, LLONG_MIN);
	y = printf("2. ll = %lld\t%lld\n", LLONG_MAX, LLONG_MIN);
	print_len(i, y);
	
	i = ft_printf("1. l = %ld\t%ld\n", LONG_MAX, LONG_MIN);
	y = printf("2. l = %ld\t%ld\n", LONG_MAX, LONG_MIN);
	print_len(i, y);

	ft_printf("\t\t CONV u ! \t\t\n\n");
	
	i = ft_printf("1. hh = %hhu\t%hhu\n", SCHAR_MAX, SCHAR_MIN);
	y = printf("2. hh = %hhu\t%hhu\n", SCHAR_MAX, SCHAR_MIN);
	print_len(i, y);

	i = ft_printf("1. h = %hu\t%hu\n", SCHAR_MAX, SCHAR_MIN);
	y = printf("2. h = %hu\t%hu\n", SCHAR_MAX, SCHAR_MIN);
	print_len(i, y);

	i = ft_printf("1. ll = %llu\t%llu\n", LLONG_MAX, LLONG_MIN);
	y = printf("2. ll = %llu\t%llu\n", LLONG_MAX, LLONG_MIN);
	print_len(i, y);
	
	i = ft_printf("1. l = %lu\t%lu\n", LONG_MAX, LONG_MIN);
	y = printf("2. l = %lu\t%lu\n", LONG_MAX, LONG_MIN);
	print_len(i, y);
	
	ft_printf("\t\t CONV x ! \t\t\n\n");
	
	i = ft_printf("1. hh = %hhx\t%hhx\n", LONG_MAX, LONG_MIN);
	y = printf("2. hh = %hhx\t%hhx\n", LONG_MAX, LONG_MIN);
	print_len(i, y);

	i = ft_printf("1. h = %hx\t%hx\n", LONG_MAX, LONG_MIN);
	y = printf("2. h = %hx\t%hx\n", LONG_MAX, LONG_MIN);
	print_len(i, y);

	i = ft_printf("1. ll = %llx\t%llx\n", LONG_MAX, LONG_MIN);
	y = printf("2. ll = %llx\t%llx\n", LONG_MAX, LONG_MIN);
	print_len(i, y);
	
	i = ft_printf("1. l = %lx\t%lx\n", LONG_MAX, LONG_MIN);
	y = printf("2. l = %lx\t%lx\n", LONG_MAX, LONG_MIN);
	print_len(i, y);

	ft_printf("\t\t CONV X ! \t\t\n\n");
	
	i = ft_printf("1. hh = %hhX\t%hhX\n", LONG_MAX, LONG_MIN);
	y = printf("2. hh = %hhX\t%hhX\n", LONG_MAX, LONG_MIN);
	print_len(i, y);

	i = ft_printf("1. h = %hX\t%hX\n", LONG_MAX, LONG_MIN);
	y = printf("2. h = %hX\t%hX\n", LONG_MAX, LONG_MIN);
	print_len(i, y);

	i = ft_printf("1. ll = %llX\t%llX\n", LLONG_MAX, LLONG_MIN);
	y = printf("2. ll = %llX\t%llX\n", LLONG_MAX, LLONG_MIN);
	print_len(i, y);
	
	i = ft_printf("1. l = %lX\t%lX\n", LONG_MAX, LONG_MIN);
	y = printf("2. l = %lX\t%lX\n", LONG_MAX, LONG_MIN);
	print_len(i, y);
	
	i = ft_printf("1. affiche le pourcent: %%\n");
	y = printf("2. affiche le pourcent: %%\n");
	print_len(i, y);

	i = ft_printf("1. int to X (#) = |%#X\n", 42);
	y = printf("2. int to X (#) = |%#X\n", 42);
	print_len(i, y);

	i = ft_printf("1. +int = |%+d\n", 42);
	y = printf("2. +int = |%+d\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. spaceint = |% d\n", 42);
	y = printf("2. spaceint = |% d\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. -int = |%-d\n", 42);
	y = printf("2. -int = |%-d\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. 0int = |%0d\n", 42);
	y = printf("2. 0int = |%0d\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. prct = |%%\n");
	y = printf("2. prct = |%%\n");
	print_len(i, y);

	i = ft_printf("1. largeur de champs a 10: |%10d\n", 42);
	y = printf("2. largeur de champs a 10: |%10d\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. precision a 10: |%.21d\n", 42);
	y = printf("2. precision a 10: |%.21d\n", 42);
	print_len(i, y);

	i = ft_printf("1. largeur de champs + precision: |%10.10d\n", 42);
	y = printf("2. largeur de champs + precision: |%10.10d\n", 42);
	print_len(i, y);

	i = ft_printf("1. + et largeur de champs : %+10d\n", 42);
	y = printf("2. + et largeur de champs : %+10d\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. space et largeur de champs:  |% 10d|\n", 42);
	y = printf("2. space et largeur de champs:  |% 10d|\n", 42);
	print_len(i, y);

	i = ft_printf("1. - et largeur de champs : |%-10d|\n", 42);
	y = printf("2. - et largeur de champs : |%-10d|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. + et largeur de champs: |%+10d|\n", 42);
	y = printf("2. + et largeur de champs: |%+10d|\n", 42);
	print_len(i, y);

	i = ft_printf("- et 0 et largeur de champs :|%-010d|\n", 42);
	y = printf("- et 0 et largeur de champs :|%-010d|\n", 42);
	print_len(i, y);

	i = ft_printf("1. |%3d|<--largeur trop petite\n", 123456789);
	y = printf("2. |%3d|<--largeur trop petite\n", 123456789);

	i = ft_printf("1. |%.3d|<-- precision trop petite\n", 123456789);
	y = printf("2. |%.3d|<-- precision trop petite\n", 123456789);
	
printf("/*******************************octal*********************************/\n");
	i = ft_printf("1. largeur de champs a 10: |%10o|\n", 42);
	y = printf("2. largeur de champs a 10: |%10o|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. precision a 10: |%.21o|\n", 42);
	y = printf("2. precision a 10: |%.21o|\n", 42);
	print_len(i, y);

	i = ft_printf("1. largeur de champs + precision: |%10.10o|\n", 42);
	y = printf("2. largeur de champs + precision: |%10.10o|\n", 42);
	print_len(i, y);

	i = ft_printf("1. + et largeur de champs : %+10o|\n", 42);
	y = printf("2. + et largeur de champs : %+10o|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. space et largeur de champs:  |% 10o|\n", 42);
	y = printf("2. space et largeur de champs:  |% 10o|\n", 42);
	print_len(i, y);

	i = ft_printf("1. - et largeur de champs : |%-10o|\n", 42);
	y = printf("2. - et largeur de champs : |%-10o|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. + et largeur de champs: |%+10o|\n", 42);
	y = printf("2. + et largeur de champs: |%+10o|\n", 42);
	print_len(i, y);

	i = ft_printf("- et 0 et largeur de champs :|%-010o|\n", 42);
	y = printf("- et 0 et largeur de champs :|%-010o|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. |%3o|<--largeur trop petite\n", 123456789);
	y = printf("2. |%3o|<--largeur trop petite\n", 123456789);
	print_len(i, y);
	
	i = ft_printf("1. |%.3o|<-- precision trop petite\n", 123456789);
	y = printf("2. |%.3o|<-- precision trop petite\n", 123456789);
	print_len(i, y);

	printf("/***************************unsigned*******************************/\n");
	i = ft_printf("1. largeur de champs a 10: |%10u|\n", 42);
	y = printf("2. largeur de champs a 10: |%10u|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. precision a 10: |%.21u|\n", -100);
	y = printf("2. precision a 10: |%.21u|\n", -100);
	print_len(i, y);

	i = ft_printf("1. largeur de champs + precision: |%10.10llu|\n", LLONG_MIN);
	y = printf("2. largeur de champs + precision: |%10.10llu|\n", LLONG_MIN);
	print_len(i, y);

	i = ft_printf("1. + et largeur de champs : %+10u|\n", INT_MIN);
	y = printf("2. + et largeur de champs : %+10u|\n", INT_MIN);
	print_len(i, y);
	
	i = ft_printf("1. space et largeur de champs:  |% 10u|\n", LLONG_MIN);
	y = printf("2. space et largeur de champs:  |% 10u|\n", LLONG_MIN);
	print_len(i, y);

	i = ft_printf("1. - et largeur de champs : |%-10u|\n", 42);
	y = printf("2. - et largeur de champs : |%-10u|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. + et largeur de champs: |%+10u|\n", 42);
	y = printf("2. + et largeur de champs: |%+10u|\n", 42);
	print_len(i, y);

	i = ft_printf("- et 0 et largeur de champs :|%-010u|\n", 42);
	y = printf("- et 0 et largeur de champs :|%-010u|\n", 42);
	print_len(i, y);

	i = ft_printf("1. |%3u|<--largeur trop petite\n", 123456789);
	y = printf("2. |%3u|<--largeur trop petite\n", 123456789);
	print_len(i, y);
	
	i = ft_printf("1. |%.3o|<-- precision trop petite\n", 123456789);
	y = printf("2. |%.3o|<-- precision trop petite\n", 123456789);
	print_len(i, y);

	printf("/***************************HEXxA*******************************/\n");
	i = ft_printf("1. largeur de champs a 10: |%10x|\n", 42);
	y = printf("2. largeur de champs a 10: |%10x|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. precision a 10: |%.21x|\n", -100);
	y = printf("2. precision a 10: |%.21x|\n", -100);
	print_len(i, y);

	i = ft_printf("1. largeur de champs + precision: |%10.10x|\n", 42);
	y = printf("2. largeur de champs + precision: |%10.10x|\n", 42);
	print_len(i, y);

	i = ft_printf("1. + et largeur de champs : %+10X|\n", -42);
	y = printf("2. + et largeur de champs : %+10X|\n", -42);
	print_len(i, y);
	
	i = ft_printf("1. space et largeur de champs:  |% 10X|\n", 77);
	y = printf("2. space et largeur de champs:  |% 10X|\n", 77);
	print_len(i, y);

	i = ft_printf("1. - et largeur de champs : |%-10x|\n", 42);
	y = printf("2. - et largeur de champs : |%-10x|\n", 42);
	print_len(i, y);
	
	i = ft_printf("1. + et largeur de champs: |%+10X|\n", 42);
	y = printf("2. + et largeur de champs: |%+10X|\n", 42);
	print_len(i, y);

	i = ft_printf("- et 0 et largeur de champs :|%-010x|\n", 42);
	y = printf("- et 0 et largeur de champs :|%-010x|\n", 42);
	print_len(i, y);

	i = ft_printf("1. |%3llX|<--largeur trop petite\n", LLONG_MIN);
	y = printf("2. |%3llX|<--largeur trop petite\n", LLONG_MIN);
	print_len(i, y);
	
	i = ft_printf("1. |%.3llx|<-- precision trop petite\n", LLONG_MAX);
	y = printf("2. |%.3llx|<-- precision trop petite\n", LLONG_MAX);
	print_len(i, y);

	i = ft_printf("1. |%.0u|\n", 0);
	y = printf("2. |%.0u|\n", 0);
	print_len(i, y);

	i = ft_printf("1. %012.0d\n", 42);
	y = printf("2. %012.0d\n", 42);
	print_len(i, y);
	
	i = ft_printf("|%0.5X|\n", 0);
	y = printf("|%0.5X|\n", 0);
	print_len(i, y);

	i = ft_printf("|%.0X|\n", 0);
	y = printf("|%.0X|\n", 0);
	print_len(i, y);
	return 0;
}
