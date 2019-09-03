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
	
	i = ft_printf("'|.21d|' : |%.21d|\n", 0);
	y = printf("'|.21d|' : |%.21d|\n", 0);
	print_len(i, y);

	i = ft_printf("'| 21|' : |% 21d|\n", 0);
	y = printf("'| 21|' : |% 21d|\n", 0);
	print_len(i, y);

	i = ft_printf("'|+21d|' : |%+21d|\n", 0);
	y = printf("'|+21d|' : |%+21d|\n", 0);
	print_len(i, y);
	return (0);
}
