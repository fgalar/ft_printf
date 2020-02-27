/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:48:00 by fgarault          #+#    #+#             */
/*   Updated: 2020/02/27 13:54:04 by fgarault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"
#include "../libft/libft.h"

static void	print_len(int i, int y)
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
	
	i = ft_printf("1. h = %hX\t%hX\n", 0, USHRT_MAX);
	y = printf("2. h = %hX\t%hX\n", 0, USHRT_MAX);
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
	
	printf("*******************************octal*********************************\n");
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
	
	printf("***************************unsigned*******************************\n");
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
	
	printf("***************************HEXxA*******************************\n");
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
	
	ft_printf("\t\t\t\t*** Test 42fileschecker ***\n");
	i = ft_printf("1. |%5%|\n");
	y = printf("2. |%5%|\n");
	print_len(i, y);
	
	i = ft_printf("1. |%-5%|\n");
	y = printf("2. |%-5%|\n");
	print_len(i, y);
	
	ft_printf("# 0104 (int)\tspaced =\n");
	i = ft_printf("1. |% d|\n", -42);
	y = printf("2. |% d|\n", -42);
	print_len(i, y);
	
	ft_printf("# 0125 (int)\t0+5d\n");
	i = ft_printf("|%0+5d|\n", 42);
	y = printf("|%0+5d|\n", 42);
	print_len(i, y);
	
	ft_printf("# 0127 (int)\n");
	i = ft_printf("|%05d|\n", -42);
	y = printf("|%05d|\n", -42);
	print_len(i, y);
	
	ft_printf("# 0128 (int)\n");
	i = ft_printf("|%0+5d|\n", -42);
	y = printf("|%0+5d|\n", -42);
	print_len(i, y);
	
	ft_printf("# 0156 (int)\n");
	i = ft_printf("%-10.5d\n", 4242);
	y = printf("%-10.5d\n", 4242);
	print_len(i, y);

	ft_printf("# 0158 (int)\n");
	i = ft_printf("%+10.5d\n", 4242);
	y = printf("%+10.5d\n", 4242);
	print_len(i, y);
	
	ft_printf("# 0159 (int)\n");
	i = ft_printf("%-+10.5d\n", 4242);
	y = printf("%-+10.5d\n", 4242);
	print_len(i, y);
	
	ft_printf("# 0160 (int)\n");
	i = ft_printf("%03.2d\n", 0);
	y = printf("%03.2d\n", 0);
	print_len(i, y);
	
	ft_printf("# 0161 (int)\n");
	i = ft_printf("%03.2d\n", 1);
	y = printf("%03.2d\n", 1);
	print_len(i, y);
	
	ft_printf("# 0162 (int)\n");
	i = ft_printf("%03.2d\n", -1);
	y = printf("%03.2d\n", -1);
	print_len(i, y);
	
	ft_printf("# 0163 (int)\n");
	i = ft_printf("@moulitest: %.10d\n", -42);
	y = printf("@moulitest: %.10d\n", -42);
	print_len(i, y);
	ft_printf("# 0180 (unsigned long)\n");
	i = ft_printf("%u\n", -42);
	y = printf("%u\n", -42);
	print_len(i, y);

	puts("I.    56. FAIL %.2s is a string, "";");
	i = ft_printf("|%.2s| is a string\n", "");
	y = printf("|%.2s| is a string\n", "");
	print_len(i, y);

	puts("II.   57. FAIL %5.2s is a string, "";");
	i = ft_printf("|%5.2s| is a string\n", "");
	y = printf("|%5.2s| is a string\n", "");
	print_len(i, y);

	puts("III.  62. FAIL |%-.2s| is a string, "";");
	i = ft_printf("|%-.2s| is a string\n", "");
	y = printf("|%-.2s| is a string\n", "");
	print_len(i, y);
	
	puts("IV.  63. FAIL %-5.2s is a string, "";");
	i = ft_printf("|%-5.2s| is a string\n", "");
	y = printf("|%-5.2s| is a string\n", "");
	print_len(i, y);
	
	puts("V.   70. FAIL %.2c, NULL;");
	i = ft_printf("|%.2c|\n", NULL);
	y = printf("|%.2c|\n", NULL);
	print_len(i, y);

	puts("VI.  73. FAIL %5c, 42;");
	i = ft_printf("|%5c|\n", 42);
	y = printf("|%5c|\n", 42);
	print_len(i, y);

	puts("VII. 74. FAIL %-5c, 42;");
	i = ft_printf("|%-5c|\n", 42 );
	y = printf("|%-5c|\n", 42 );
	print_len(i, y);

	puts("VIII.75. FAIL @moulitest: %c, 0");
	i = ft_printf("@moulitest: |%c|\n", 0);
	y = printf("@moulitest: |%c|\n", 0);
	print_len(i, y);

	puts("IX.  76. FAIL (%2c, 0);");
	i = ft_printf("1.|%2c|\n", 0);
	y = printf("2.|%2c|\n", 0);
	print_len(i, y);

	puts("X.   77. FAIL (null %c and text, 0);");
	i = ft_printf("null |%c| and text\n", 0);
	y = printf("null |%c| and text\n", 0);
	print_len(i, y);

	puts("XI.  78. FAIL (% c, 0);"); 
	i = ft_printf("|% c|\n", 0);
	y = printf("|% c|\n", 0);
	print_len(i, y);

	
	puts("XIII.121. FAIL(%0d, -42);");
	i = ft_printf("|%0d|\n", -42);
	y = printf("|%0d|\n", -42);
	print_len(i, y);

	puts("XIV.122. FAIL (%00d, -42);");
	i = ft_printf("|%00d|\n", -42);
	y = printf("|%00d|\n", -42);
	print_len(i, y);

	puts("XV. 157. FAIL (% 10.5d, 4242);");
	i = ft_printf("|% 10.5d|\n", 4242);
	y = printf("|% 10.5d|\n", 4242);
	print_len(i, y);

	puts("XVI.180. FAIL (%lu, -42);");
	i = ft_printf("|%lu|\n", -42);
	y = printf("|%lu|\n", -42);
	print_len(i, y);
	
	i = ft_printf("|%#.5x|\n", 435);
	y = printf("|%#.5x|\n", 435);
	print_len(i, y);
	
	i = ft_printf("1. |%-8.3i|\n", -8473);
	y = printf("2. |%-8.3i|\n", -8473);
	print_len(i, y);

	i = ft_printf("1. |% -7i|\n", 33);
	y = printf("2. |% -7i|\n", 33);
	print_len(i, y);

	i = ft_printf("1. %-+10.5d\n", 4242);
	y = printf("2. %-+10.5d\n", 4242);
	print_len(i, y);


	i = ft_printf("1. |%-8.3d|\n", 8375);
	y = printf("2. |%-8.3d|\n", 8375);
	print_len(i, y);

	i = ft_printf("1. |%0-8.3d|\n", 8375);
	y = printf("2. |%0-8.3d|\n", 8375);
	print_len(i, y);
	
	i = ft_printf("1. |% -3.7i|\n", 3267);
	y = printf("2. |% -3.7i|\n", 3267);
	print_len(i, y);

	i = ft_printf("1. |%#3o|\n", 0);
	y = printf("2. |%#3o|\n", 0);
	print_len(i, y);
	
	i = ft_printf("1. |%+.0i|\n", 0);
	y = printf("2. |%+.0i|\n", 0);
	print_len(i, y);

	i = ft_printf("1. |%.03s|\n", NULL);
	y = printf("2. |%.03s|\n", NULL);
	print_len(i, y);

  	i = ft_printf("@moulitest x with null: |%5.x| |%5.0x|\n", 0, 0);
  	y = printf("@moulitest x with null: |%5.x| |%5.0x|\n", 0, 0);
	print_len(i, y);

  	i = ft_printf("@moulitest o with null: |%5.o| |%5.0o|\n", 0, 0);
  	y = printf("@moulitest o with null: |%5.o| |%5.0o|\n", 0, 0);
	print_len(i, y);
	
	puts("XII. (@moulitest: %#.o %#.0o, 0, 0);");
	i = ft_printf("@moulitest: |%#.o| |%#.0o|\n", 0, 0);
	y = printf("@moulitest: |%#.o| |%#.0o|\n", 0, 0);
	print_len(i, y);
	
	ft_printf("bonjour tout le monde\n");
	i = ft_printf("|%|\t|%4.s|\t|%.p|, |%.0p|\n","42", 0, 0);
	y = printf("|%|\t|%4.s|\t|%.p|, |%.0p|\n","42", 0, 0);
	print_len(i, y);

	i = ft_printf("%.06d\n", 49);
	y = printf("%.06d\n", 49);
	print_len(i, y);
	
	i = ft_printf("%.5p\n", 0);
	y = printf("%.5p\n", 0);
	print_len(i, y);

	i = ft_printf("%4.15s\n", "42 is the answer");
	y = printf("%4.15s\n", "42 is the answer");
	print_len(i, y);
	char	c;

	c = '!';
	ft_printf("c: %c.\n", c);
	printf("c: %c.\n----------\n", c);
	ft_printf("1c: %1c.\n", c);
	printf("1c: %1c.\n----------\n", c);
	ft_printf("7c: %7c.\n", c);
	printf("7c: %7c.\n----------\n", c);
	ft_printf("-1c: %-1c.\n", c);
	printf("-1c: %-1c.\n----------\n", c);
	ft_printf("-5c: %-5c.\n", c);
	printf("-5c: %-5c.\n----------\n", c);
	c = 'Z';
	ft_printf("c: %c.\n", c);
	printf("c: %c.\n----------\n", c);
	ft_printf("12c: %12c.\n", c);
	printf("12c: %12c.\n----------\n", c);
	ft_printf("-1c: %-1c.\n", c);
	printf("-1c: %-1c.\n----------\n", c);
	ft_printf("1c: %1c.\n", c);
	printf("1c: %1c.\n----------\n", c);
	ft_printf("5c: %5c.\n", c);
	printf("5c: %5c.\n----------\n", c);
	ft_printf("-5c: %-5c.\n", c);
	printf("-5c: %-5c.\n----------\n", c);

	ft_printf("c: %c.\n", 0);
	printf("c: %c.\n----------\n", 0);

	ft_printf("%%.\n");
	printf("%%.\n----------\n");
	ft_printf("%%%%%d.\n", -120);
	printf("%%%%%d.\n----------\n", -120);
	int			ans;
	int			real;

	ans = ft_printf("Okalmos : %c. %f. %d. %x.\n", 'A', 1235.123, 0, 56985);
	real = printf("Okalmos : %c. %f. %d. %x.\n", 'A', 1235.123, 0, 56985);
	printf("return ft_printf: %d\n", ans);
	printf("return printf: %d\n----------\n", real);

	ans = ft_printf("Okalmos : %12c. %-5f. %020d. %#x.\n", 'A', 1235.123, 0, 56985);
	real = printf("Okalmos : %12c. %-5f. %020d. %#x.\n", 'A', 1235.123, 0, 56985);
	printf("return ft_printf: %d\n", ans);
	printf("return printf: %d\n----------\n", real);

	ans = ft_printf("%s. %s. %s. %d.\n", "asdqwdas das", "asdasd asdasasdasdw qbhd", "", -569521);
	real = printf("%s. %s. %s. %d.\n", "asdqwdas das", "asdasd asdasasdasdw qbhd", "", -569521);
	printf("return ft_printf: %d\n", ans);
	printf("return printf: %d\n----------\n", real);

	ans = ft_printf("");
	real = printf("");
	printf("return ft_printf: %d\n", ans);
	printf("return printf: %d\n----------\n", real);

	ans = ft_printf("%-43d. %12s. %096.5d.\n", -321, "Oaklaasd", -9658);
	real = printf("%-43d. %12s. %096.5d.\n", -321, "Oaklaasd", -9658);
	printf("return ft_printf: %d\n", ans);
	printf("return printf: %d\n----------\n", real);

	ans = ft_printf("Okalmos : %c. %.0d. %.0x., %d.\n", 'A', 1235, 0, 56985);
	real = printf("Okalmos : %c. %.0d. %.0x., %d.\n", 'A', 1235, 0, 56985);
	printf("return ft_printf: %d\n", ans);
	printf("return printf: %d\n----------\n", real);

	i = ft_printf("mine|%-+1.d|%- 1.d|%-01.d|%+ 1.d|%+01.d|% 01.d|%-+ 01.d|\n", 0, 0, 0, 0, 0, 0, 0);
	y = printf("true|%-+1.d|%- 1.d|%-01.d|%+ 1.d|%+01.d|% 01.d|%-+ 01.d|\n", 0, 0, 0, 0, 0, 0, 0);
	print_len(i, y);

	i = ft_printf("1.%23.5o|%-23.5o|%#23.5o|%023.5o\n", 0U, 0U, 0U, 0U);
	y = printf("1.%23.5o|%-23.5o|%#23.5o|%023.5o\n", 0U, 0U, 0U, 0U);
	print_len(i, y);
	
	i = ft_printf("2.%.5o|%-.5o|%#.5o|%0.5o\n", 0U, 0U, 0U, 0U);
	y = printf("2.%.5o|%-.5o|%#.5o|%0.5o\n", 0U, 0U, 0U, 0U);
	print_len(i, y);

	i = ft_printf("3.%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	y = printf("3.%.5hho|%-.5hho|%#.5hho|%0.5hho\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	print_len(i, y);

	i = ft_printf("4.%-#1.5hX|%-01.5hX|%#01.5hX|%-#01.5hX\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	y = printf("4.%-#1.5hX|%-01.5hX|%#01.5hX|%-#01.5hX\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	print_len(i, y);
	
	i = ft_printf("%-#.5hX|%-0.5hX|%#0.5hX|%-#0.5hX\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	y = printf("%-#.5hX|%-0.5hX|%#0.5hX|%-#0.5hX\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	print_len(i, y);
	
	i = ft_printf("%1.X|%-1.X|%#1.X|%01.X\n", 0U, 0U, 0U, 0U);
	y = printf("%1.X|%-1.X|%#1.X|%01.X\n", 0U, 0U, 0U, 0U);
	print_len(i, y);
	i = ft_printf("%-#1.5hx|%-01.5hx|%#01.5hx|%-#01.5hx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	y = printf("%-#1.5hx|%-01.5hx|%#01.5hx|%-#01.5hx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	print_len(i, y);

	
	i = ft_printf("%1.x|%-1.x|%#1.x|%01.x\n", 0U, 0U, 0U, 0U);
	y = printf("%1.x|%-1.x|%#1.x|%01.x\n", 0U, 0U, 0U, 0U);
	print_len(i, y);

	i = ft_printf("%.5hx|%-.5hx|%#.5hx|%0.5hx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	y = printf("%.5hx|%-.5hx|%#.5hx|%0.5hx\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	print_len(i, y);

	i = ft_printf("%.5d|%-.5d|%+.5d|% .5d|%0.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	y = printf("%.5d|%-.5d|%+.5d|% .5d|%0.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	print_len(i, y);

	i = ft_printf("%1.5d|%-1.5d|%+1.5d|% 1.5d|%01.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	y = printf("%1.5d|%-1.5d|%+1.5d|% 1.5d|%01.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	print_len(i, y);

	i = ft_printf("%-+.5d|%- .5d|%-0.5d|%+ .5d|%+0.5d|% 0.5d|%-+ 0.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	y = printf("%-+.5d|%- .5d|%-0.5d|%+ .5d|%+0.5d|% 0.5d|%-+ 0.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	print_len(i, y);

	i = ft_printf("%-+1.5d|%- 1.5d|%-01.5d|%+ 1.5d|%+01.5d|% 01.5d|%-+ 01.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	y = printf("%-+1.5d|%- 1.5d|%-01.5d|%+ 1.5d|%+01.5d|% 01.5d|%-+ 01.5d\n", INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX);
	print_len(i, y);

	i = ft_printf("%.5d|%-.5d|%+.5d|% .5d|%0.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	y = printf("%.5d|%-.5d|%+.5d|% .5d|%0.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	print_len(i, y);

	i = ft_printf("%1.5d|%-1.5d|%+1.5d|% 1.5d|%01.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	y = printf("%1.5d|%-1.5d|%+1.5d|% 1.5d|%01.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	print_len(i, y);

	i = ft_printf("%-+.5d|%- .5d|%-0.5d|%+ .5d|%+0.5d|% 0.5d|%-+ 0.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	y = printf("%-+.5d|%- .5d|%-0.5d|%+ .5d|%+0.5d|% 0.5d|%-+ 0.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	print_len(i, y);
	
	i = ft_printf("%-+1.5d|%- 1.5d|%-01.5d|%+ 1.5d|%+01.5d|% 01.5d|%-+ 01.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	y = printf("%-+1.5d|%- 1.5d|%-01.5d|%+ 1.5d|%+01.5d|% 01.5d|%-+ 01.5d\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	print_len(i, y);

	ft_printf("|%#x|\n", 0);
	printf("|%#x|\n", 0);
	ft_printf("@moulitest: |%#.x|\t|%#.0x|\n", 0, 0);
	printf("@moulitest: |%#.x|\t|%#.0x|\n", 0, 0);
	ft_printf("|%#o|\n", 0);
	printf("|%#o|\n", 0);
	ft_printf("@moulitest: |%#.o| |%#.0o|\n", 0, 0); //--> lorsque precis = 0 -> 0 
	printf("@moulitest: |%#.o| |%#.0o|\n", 0, 0);
	exit (1);
	ft_printf("@moulitest: |%o|\n", 0);
	printf("@moulitest: |%o|\n", 0);
	ft_printf("%#o\n", 42);
	printf("%#o\n", 42);
	ft_printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	ft_printf("%#.3o\n", 1);
	printf("%#.3o\n", 1);
	puts("\n\n");
	ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", 0U, 0U, 0U, 0U);
	printf("%.5o|%-.5o|%#.5o|%0.5o\n", 0U, 0U, 0U, 0U);

	ft_printf("%-#23o|%-023o|%#023o|%-#023o\n", 0U, 0U, 0U, 0U); // sans precis
	printf("%-#23o|%-023o|%#023o|%-#023o\n", 0U, 0U, 0U, 0U);
	ft_printf("%-#23.o|%-023.o|%#023.o|%-#023.o\n", 0U, 0U, 0U, 0U); // avec precis a 0
	printf("%-#23.o|%-023.o|%#023.o|%-#023.o\n", 0U, 0U, 0U, 0U);
	ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX,UINT_MAX); // avec des precis sup a 0
	printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	ft_printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	ft_printf("%1.5lo|%-1.5lo|%#1.5lo|%01.5lo\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("%1.5lo|%-1.5lo|%#1.5lo|%01.5lo\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);

	return 0;
}
