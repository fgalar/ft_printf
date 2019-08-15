#include <limits.h>
#include <float.h>
#include <stdio.h>
#include "../ft_printf.h"

int main()
{
	printf("%f\n", 1234563294890.696969696969);
	ft_printf("%f", 1234563294890.696969696969);
	return (0);
}
