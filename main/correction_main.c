#include <stdio.h>
#include <unistd.h>
#include <float.h>
#include <limits.h>
#include "../ft_printf.h"

int		main()
{
	int		a = 'A';
//	printf("Simple Tests\n");
//	printf("Check that usual conversions %%s[%s], %%p[%p], %%d[d]\n", "Bonjour!", &a, INT_MIN);
//	ft_printf("Check that usual conversions %%s[%s], %%p[%p], %%d[d]\n", "Bonjour!", &a, INT_MIN);
//	printf("Check that usual conversions %%s[%s], %%p[%p], %%d[d]\n", 0, 0, 0);
//	ft_printf("Check that usual conversions %%s[%s], %%p[%p], %%d[d]\n", 0, 0, 0);
//	
//	printf("\nLess simples Tests\n");
//	printf("Check that you can put multiple conversions\n");
//	printf("-%d -%i -%o -%u -%x -%X\n", INT_MAX, INT_MIN, INT_MAX, INT_MAX, INT_MIN, INT_MAX);
//	ft_printf("-%d -%i -%o -%u -%x -%X\n", INT_MAX, INT_MIN, INT_MAX, INT_MAX, INT_MIN, INT_MAX);
	printf("true|%c|%c|%c|%c|%c|\n", '!', 0, 0, 'v', '0');
	ft_printf("fals|%c|%c|%c|%c|%c|\n", '!', 0, 0, 'v', '0');
//	printf("\nSlighly complicated tests\n");
//	printf("");
//
//	printf("\nComplicated tests\n");
//	
//	printf("\nMore complicated tests\n");
//
//	printf("\nMore Stuff to test\n");
//
//	printf("\nAnd finally ...\n");
	return 0;
}
