#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

int	main()
{
	ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	exit(1);
	ft_printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	ft_printf("%-#.5o|%-0.5o|%#0.5o|%-#0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX,UINT_MAX);
	printf("%-#.5o|%-0.5o|%#0.5o|%-#0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX,UINT_MAX);
	ft_printf("%-#1.5o|%-01.5o|%#01.5o|%-#01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	printf("%-#1.5o|%-01.5o|%#01.5o|%-#01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	printf("%.5o|%-.5o|%#.5o|%0.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	ft_printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	
	return 0;
}
