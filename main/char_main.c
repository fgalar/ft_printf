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
	int		i = 0;
	int		y = 0;
	puts("%c, '?'");
	i = ft_printf("1.|%c|\n", '?');
	y = printf("2.|%c|\n", '?');
	print_len(i, y);

	puts("\n\nV.   70. FAIL %.2c, NULL;");
	i = ft_printf("70.1.|%.2c|\n", NULL);
	y = printf("70.2.|%.2c|\n", NULL);
	print_len(i, y);

	puts("VI.  73. FAIL %5c, 42;");
	i = ft_printf("73.1.|%5c|\n", 42);
	y = printf("73.2.|%5c|\n", 42);
	print_len(i, y);

	puts("VII. 74. FAIL %-5c, 42;");
	i = ft_printf("74.1.|%-5c|\n", 42 );
	y = printf("74.2.|%-5c|\n", 42 );
	print_len(i, y);

	puts("VIII.75. FAIL @moulitest: %c, 0");
	i = ft_printf("75.1.@moulitest: |%c|\n", 0);
	y = printf("75.2.@moulitest: |%c|\n", 0);
	print_len(i, y);

	puts("IX.  76. FAIL (%5c, 0);");
	i = ft_printf("76.1.|%5c|\n", 0);
	y = printf("76.2.|%5c|\n", 0);
	print_len(i, y);

	puts("X.   77. FAIL (null %c and text, 0);");
	i = ft_printf("77.1.null |%c| and text\n", 0);
	y = printf("77.2.null |%c| and text\n", 0);
	print_len(i, y);

	puts("XI.  78. FAIL (% c, 0);");
	i = ft_printf("78.1.|% c|\n", 0);
	y = printf("78.2.|% c|\n", 0);
	print_len(i, y);
	
	puts("XII (%-10c)");
	i = ft_printf("XII. |%-10c|\n", 0);
	y = printf("XII. |%-10c|\n", 0);
	print_len(i, y);
	
	i = ft_printf("1. |%05c|\n", 0); 
	y = printf("2. |%05c|\n", 0);
	print_len(i, y);
	
	i = ft_printf("|%.5c|\n", 42);
	y = printf("|%.5c|\n", 42);	
	print_len(i, y);
	return (0);
}
