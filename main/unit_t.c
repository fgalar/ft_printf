#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include "../ft_printf.h"

int	main()
{
	ft_printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
	printf("%.5o|%-.5o|%#.5o|%0.5o\n", UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX);
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
	ft_printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", 0., 0., 0., 0., 0., 0.);
	printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", 0., 0., 0., 0., 0., 0.);
	printf("|%f|\n", -0.0);
	ft_printf("|%f|\n", -0.0);
	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);
	printf("%f|%-f|%+f|% f|%#f|%0f\n", -42., -42., -42., -42., -42., -42.);
	ft_printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", -42., -42., -42., -42.,-42., -42.);
	printf("%15.8f|%-15.8f|%+15.8f|% 15.8f|%#15.8f|%015.8f\n", -42., -42., -42., -42.,-42., -42.);
	ft_printf("%-+8.14lf|%- 8.14lf|%-#8.14lf|%-08.14lf|%-+#8.14lf|%-+ #08.14lf\n", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);
	printf("%-+8.14lf|%- 8.14lf|%-#8.14lf|%-08.14lf|%-+#8.14lf|%-+ #08.14lf\n", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);
  	ft_printf("%+8.14lf|%+ 8.14lf|%+-8.14lf|%+#8.14lf|%+08.14lf|%+ -#08.14lf\n", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);
 	printf("%+8.14lf|%+ 8.14lf|%+-8.14lf|%+#8.14lf|%+08.14lf|%+ -#08.14lf\n", 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849, 38546.5849);
	ft_printf("%.f|%.1f|%.2f|%.5f|%.12f\n", 989.9999999, 989.9999999, 989.9999999, 989.9999999, 989.9999999);
	printf("%.f|%.1f|%.2f|%.5f|%.12f\n", 989.9999999, 989.9999999, 989.9999999, 989.9999999, 989.9999999);
	ft_printf("%.f|%.1f|%.2f|%.5f|%.12f\n", 899.9999999, 899.9999999, 899.9999999, 899.9999999, 899.9999999);
	printf("%.f|%.1f|%.2f|%.5f|%.12f\n", 899.9999999, 899.9999999, 899.9999999, 899.9999999, 899.9999999);
	//ft_printf("%Lf\n", LDBL_MIN);
	//printf("%Lf\n", LDBL_MIN);
	ft_printf("%.1f\n", 9.999);
	printf("%.1f\n", 9.999);
	ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
	printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
	ft_printf("%f\n", 999.999999);
	printf("%f\n", 999.999999);
    ft_printf("%f\n", 0.0894255);
    printf("%f\n", 0.0894255);
    ft_printf("%.0f\n", -0.00032);
    printf("%.0f\n", -0.00032);
    ft_printf("%.0f\n", -DBL_MIN);
    printf("%.0f\n", -DBL_MIN);
    ft_printf("%.0Lf\n", -LDBL_MIN);
    printf("%.0Lf\n", -LDBL_MIN);

	ft_printf("%5f|%-5f|%+5f|% 5f|%#5f|%05f\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);
	printf("%5f|%-5f|%+5f|% 5f|%#5f|%05f\n", INFINITY, INFINITY, INFINITY, INFINITY, INFINITY, INFINITY);
	ft_printf("%+8.14f|%+ 8.14f|%+-8.14f|%+#8.14f|%+08.14f|%+ -#08.14f\n", -INFINITY, -INFINITY,-INFINITY, -INFINITY, -INFINITY, -INFINITY);
	printf("%+8.14f|%+ 8.14f|%+-8.14f|%+#8.14f|%+08.14f|%+ -#08.14f\n", -INFINITY, -INFINITY,-INFINITY, -INFINITY, -INFINITY, -INFINITY);
	ft_printf("%f|%-f|%+f|% f|%#f|%0f\n", 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0.);
	printf("%f|%-f|%+f|% f|%#f|%0f\n", 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0., 0. / 0.);
	return 0;
}
