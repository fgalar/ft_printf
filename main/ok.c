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
	int i = 0;
	int y = 0;

	i = ft_printf("|%|\t|%%|\t|%5%|\n");
	y = printf("|%|\t|%%|\t|%5%|\n");
	print_len(i, y);
	return 0;
}
