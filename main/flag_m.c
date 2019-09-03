#include <stdio.h>
#include "../ft_printf.h"

void	print_len(int	my_pf, int t_pf)
{
	ft_putstr("\ttaille ft_printf\t");
	ft_putnbr(my_pf);
	ft_putstr("\n\ttaille printf\t\t");
	ft_putnbr(t_pf);
	ft_putstr("\n\n");
}

int	main()
{
	int	i;
	int	y;
	
	ft_putstr("I\n");
	i = ft_printf("'|.21d|' : |%.21d|\n", 0);
	y = printf("'|.21d|' : |%.21d|\n", 0);
	print_len(i, y);

	ft_putstr("II\n");
	i = ft_printf("'| 21|' : |% 21d|\n", 0);
	y = printf("'| 21|' : |% 21d|\n", 0);
	print_len(i, y);

	ft_putstr("III\n");
	i = ft_printf("'|+21d|' : |%+21d|\n", 0);
	y = printf("'|+21d|' : |%+21d|\n", 0);
	print_len(i, y);

	ft_putstr("IV\n");
	i = ft_printf("|%%|\n");
	y = printf("|%%|\n");
	print_len(i, y);

	ft_putstr("V\n");
	i = ft_printf("|%010x|\n", 542);
	y = printf("|%010x|\n", 542);
	print_len(i, y);


	ft_putstr("VI\n");
	i = ft_printf("|%5.2x|\n", 5427);
	y = printf("|%5.2x|\n", 5427);
	print_len(i, y);

	ft_putstr("VII\n");
	ft_printf("|%#x|\n", 0);
	printf("|%#x|\n", 0);
	print_len(i, y);


	ft_putstr("VIII\n");
	ft_printf("|%#8x|\n", 42);
	printf("|%#8x|\n", 42);
	print_len(i, y);


	ft_putstr("IX\n");
	ft_printf("|%#-08x|\n", 42);
	printf("|%#-08x|\n", 42);
	print_len(i, y);


	ft_putstr("X\n");
	ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	printf("@moulitest: %5.x %5.0x\n", 0, 0);
	print_len(i, y);


	ft_putstr("XI\n");
	ft_printf("%10s is a string\n", "this");
	printf("%10s is a string\n", "this");
	print_len(i, y);

	ft_putstr("XII\n");
	ft_printf("%.2s is a string\n", "this");
	printf("%.2s is a string\n", "this");
	print_len(i, y);

	return (0);
}
