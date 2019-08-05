#include <limits.h>
#include <float.h>
#include <stdio.h>
#include "ft_printf.h"
int main()
{
	printf("%f\n", 1234563294890.69897090);
	ft_printf("%f", 1234563294890.69897090);
	return (0);
}
