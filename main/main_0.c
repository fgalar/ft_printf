#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"
#include "../libft/libft.h"

int	main()
{	
	ft_printf("@moulitest 'o': |%#.o| |%#.0o|\n", 0, 0);
	printf("@moulitest 'o': |%#.o| |%#.0o|\n", 0, 0);
	
	ft_printf("@moulitest 'd': |%#.d| |%#.0d|\n", 0, 0);
	printf("@moulitest 'd': |%#.d| |%#.0d|\n", 0, 0);
	
	ft_printf("@moulitest 'u': |%#.u| |%#.0u|\n", 0, 0);
	printf("@moulitest 'u': |%#.u| |%#.0u|\n", 0, 0);
	
	ft_printf("@moulitest 'x': |%#.x| |%#.0x|\n", 0, 0);
	printf("@moulitest 'x': |%#.x| |%#.0x|\n", 0, 0);

	return (0);
}

