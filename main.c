#include <stdio.h>
#include "ft_printf.h"

int		main(int ac, char **av)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	i = ft_printf("%7884s", av[1]);
	printf("%d\n", i);
	y = printf("%7884s", av[1]);
	printf("%d\n", y);
	return (0);
}
