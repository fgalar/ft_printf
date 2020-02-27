#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

int	main()
{
	//ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	//printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	//ft_printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	//printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	//ft_printf("%-#.5o|%-0.5o|%#0.5o|%-#0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX,UINT_MAX);
	//printf("%-#.5o|%-0.5o|%#0.5o|%-#0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX,UINT_MAX);
	//ft_printf("%-#1.5o|%-01.5o|%#01.5o|%-#01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	//printf("%-#1.5o|%-01.5o|%#01.5o|%-#01.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	//ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	//printf("%.5o|%-.5o|%#.5o|%0.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	//ft_printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
	//printf("%1.5o|%-1.5o|%#1.5o|%01.5o\n", ULONG_MAX, ULONG_MAX, ULONG_MAX, ULONG_MAX);
//	ft_printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", 0., 0., 0., 0., 0., 0.);
//	printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", 0., 0., 0., 0., 0., 0.);

	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);
	printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);
	ft_printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", -42., -42., -42., -42.,-42., -42.);
	printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", -42., -42., -42., -42.,-42., -42.);
	return 0;
}
