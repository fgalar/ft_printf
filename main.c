#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int		main(int ac, char **av)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	//ft_printf("%7884s", av[1]);
	//puts("");
	//printf("%7884s", av[1]);

	i = ft_printf("%.2147483649f|%2147483649f|%d\n", 1.0, 1.0, 7);
	y = printf("%.2147483649f|%2147483649f|%d\n", 1.0, 1.0, 7);
	printf("\nft_pf = %d\tpf = %d\n", i, y);

//	i = printf("pf   :%-040.400s\n", av[1]);
//	y = ft_printf("ft_pf:%-040.400s\n", av[1]);
//	printf("pf = %d\nft_pf = %d", i, y);

	return (0);
}
