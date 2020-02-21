#include <stdio.h>
#include "../ft_printf.h"

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
	int i = 0;
	int y = 0;
	i = ft_printf("1. |%.03s|\n", NULL);
    y = printf("2. |%.03s|\n", NULL);
    print_len(i, y);
	i = ft_printf("|%|\t|%4.s|\t|%.p|, |%.0p|\n","42", 0, 0);
	y = printf("|%|\t|%4.s|\t|%.p|, |%.0p|\n","42", 0, 0);
	print_len(i, y);
	printf("20) Vrai PRINTF : |%-1.0s|\n", "123456789");
	ft_printf("20) Mon PRINTF  : |%-1.0s|\n", "123456789");
	printf("30) Vrai PRINTF : |%1.0s|\n", NULL);
	ft_printf("30) Mon PRINTF  : |%1.0s|\n", NULL);
	ft_printf("%%");
	puts("");
	printf("%%");
	return (0);
}
