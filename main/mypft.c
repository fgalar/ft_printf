#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"
#include "../libft/libft.h"

int	main()
{
	ft_printf("%010s is a string\n", "this");
	printf("%010s is a string\n", "this");

	ft_printf("%#5x\n", 52625);
	printf("%#5x\n", 52625);
	return 0;
}
