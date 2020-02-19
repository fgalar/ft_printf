#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "../ft_printf.h"
#include "../libft/libft.h"

int	main()
{
	ft_printf("1 . %010s is a string\n", "this");
	printf("1 . %010s is a string\n", "this");
	puts("");
	ft_printf("2 . %#5x\n", 52625);
	printf("2 . %#5x\n", 52625);
	puts("");
	ft_printf("3 . %#05x\n", 52625);
	printf("3 . %#05x\n", 52625);
	puts("");
	ft_printf("4 . %-#1.5hX|%-01.5hX|%#01.5hX|%-#01.5hX\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	printf("4 . %-#1.5hX|%-01.5hX|%#01.5hX|%-#01.5hX\n", ULLONG_MAX, ULLONG_MAX, ULLONG_MAX, ULLONG_MAX);
	puts("");
    ft_printf("5 . %f\n", -3.85);
    printf("5 . %f\n", -3.85);
	puts("");
	ft_printf("6 . %f\n", 3.9999999);
	printf("6 . %f\n", 3.9999999);
	puts("");
	ft_printf("7 . %f\n", 1.99999949);
	ft_printf("7 . %f\n", 1.99999949);
	puts("");
	ft_printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.646542424224, 1444565444646.646542424224);
 	printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.646542424224, 1444565444646.646542424224);
	puts("");
	ft_printf("%f\n", -958.125);
	printf("%f\n", -958.125);
	puts("");
	ft_printf("%f\n", -7.00036);
	printf("%f\n", -7.00036);
	puts("");
	ft_printf("%f\n", -0.00032);
	printf("%f\n", -0.00032);
	puts("");
	ft_printf("%f\n", -0.000001);
	printf("%f\n", -0.000001);
	puts("");
	ft_printf("%f\n", -875.000001);
	printf("%f\n", -875.000001);
	puts("");
	ft_printf("%f\n", -99.999999);
	printf("%f\n", -99.999999);
	puts("");
	ft_printf("%f\n", -0.999999);
	printf("%f\n", -0.999999);
	puts("");
	ft_printf("%f\n", -985.765426499);
	printf("%f\n", -985.765426499);
	puts("");
	ft_printf("%f\n", -56.2012685);
	printf("%f\n", -56.2012685);
	puts("");
	ft_printf("%f\n", -5.0299999);
	printf("%f\n", -5.0299999);
	puts("");
	ft_printf("%f\n", -5.02999949);
	printf("%f\n", -5.02999949);
	puts("");
	ft_printf("%f\n", -0.99999949);
	printf("%f\n", -0.99999949);
	puts("");
	ft_printf("%f\n", 3.9999999);
	printf("%f\n", 3.9999999);
	puts("");
	ft_printf("%f\n", -5.9999999);
	printf("%f\n", -5.9999999);
	puts("");
	ft_printf("this %.0f float\n", 11.6);
	printf("this %.0f float\n", 11.6);
	puts("");
	ft_printf("%.0f\n", -3.85);
	printf("%.0f\n", -3.85);
	puts("");
	exit(1);
	ft_printf("%.0f\n", 573.924);
	printf("%.0f\n", 573.924);
	puts("");
	ft_printf("%.0f", -958.125);
	printf("%.0f", -958.125);
	puts("");
	ft_printf("%.0f\n", -7.00036);
	printf("%.0f\n", -7.00036);
	puts("");
	ft_printf("%.0f\n", -0.00032);
	printf("%.0f\n", -0.00032);
	puts("");
	ft_printf("%.1f\n", -3.85);
	printf("%.1f\n", -3.85);
	puts("");
	ft_printf("%.1f\n", -958.125);
	printf("%.1f\n", -958.125);
	puts("");
	ft_printf("%.1f\n", -7.00036);
	printf("%.1f\n", -7.00036);
	puts("");
	ft_printf("%.1f\n", -0.00032);
	printf("%.1f\n", -0.00032);
	puts("");
	ft_printf("%.3f\n", -3.85);
	printf("%.3f\n", -3.85);
	puts("");
	ft_printf("%.3f\n", -958.125);
	printf("%.3f\n", -958.125);
	puts("");
	ft_printf("%.3f\n", -7.00036);
	printf("%.3f\n", -7.00036);
	puts("");
	ft_printf("%.3f\n", -0.00032);
	printf("%.3f\n", -0.00032);
	puts("");
	ft_printf("%.7f\n", -3.85);
	printf("%.7f\n", -3.85);
	puts("");
	ft_printf("%.7f\n", -958.125);
	printf("%.7f\n", -958.125);
	puts("");
	ft_printf("%.7f\n", -7.00036);
	printf("%.7f\n", -7.00036);
	puts("");
	ft_printf("%.7f\n", -0.000032);
	printf("%.7f\n", -0.000032);
	puts("");
	ft_printf("%.7f\n", -0.0000001);
	printf("%.7f\n", -0.0000001);
	puts("");
	ft_printf("%.7f\n", -875.000001);
	printf("%.7f\n", -875.000001);
	puts("");
	ft_printf("%.7f\n", -99.9999999);
	printf("%.7f\n", -99.9999999);
	puts("");
	ft_printf("%.7f\n", -0.999999);
	printf("%.7f\n", -0.999999);
	puts("");
	ft_printf("%.7f\n", -985.765426499);
	printf("%.7f\n", -985.765426499);
	puts("");
	ft_printf("%.7f\n", -56.2012685);
	printf("%.7f\n", -56.2012685);
	puts("");
	ft_printf("%.7f\n", -5.0299999);
	printf("%.7f\n", -5.0299999);
	puts("");
	ft_printf("%.7f\n", -5.02999949);
	printf("%.7f\n", -5.02999949);
	puts("");
	ft_printf("%.7f\n", -0.99999949);
	printf("%.7f\n", -0.99999949);
	puts("");
	ft_printf("%.8f\n", -3.85);
	printf("%.8f\n", -3.85);
	puts("");
	ft_printf("%.8f\n", -958.125);
	printf("%.8f\n", -958.125);
	puts("");
	ft_printf("%.8f\n", -7.00036);
	printf("%.8f\n", -7.00036);
	puts("");
	ft_printf("%.8f\n", -0.0000032);
	printf("%.8f\n", -0.0000032);
	puts("");
	ft_printf("%.8f\n", -0.00000001);
	printf("%.8f\n", -0.00000001);
	puts("");
	ft_printf("%.8f\n", -875.000001);
	printf("%.8f\n", -875.000001);
	puts("");
	ft_printf("%.8f\n", -99.99999999);
	printf("%.8f\n", -99.99999999);
	puts("");
	ft_printf("%.8f\n", -0.999999);
	printf("%.8f\n", -0.999999);
	puts("");
	ft_printf("%.8f\n", -985.765426499);
	printf("%.8f\n", -985.765426499);
	puts("");
	ft_printf("%.8f\n", -56.2012685);
	printf("%.8f\n", -56.2012685);
	puts("");
	ft_printf("%.8f\n", -5.0299999);
	printf("%.8f\n", -5.0299999);
	puts("");
	ft_printf("%.8f\n", -5.02999949);
	printf("%.8f\n", -5.02999949);
	puts("");
	ft_printf("%.8f\n", -0.99999949);
	printf("%.8f\n", -0.99999949);
	puts("");
	ft_printf("%#.0f\n", -7.4);
	printf("%#.0f\n", -7.4);
	puts("");
	ft_printf("%#.1f\n", -7.3);
	printf("%#.1f\n", -7.3);
	puts("");
	ft_printf("%5.0f\n", 7.3);
	printf("%5.0f\n", 7.3);
	puts("");
	ft_printf("%5.0f\n", -7.3);
	printf("%5.0f\n", -7.3);
	puts("");
	ft_printf("%5.1f\n", -7.3);
	printf("%5.1f\n", -7.3);
	puts("");
	ft_printf("%5.3f\n", -7.3);
	printf("%5.3f\n", -7.3);
	puts("");
	ft_printf("%5.6f\n", -7.3);
	printf("%5.6f\n", -7.3);
	puts("");
	ft_printf("%-5.0f\n", -7.3);
	printf("%-5.0f\n", -7.3);
	puts("");
	ft_printf("%-5.1f\n", -7.3);
	printf("%-5.1f\n", -7.3);
	puts("");
	ft_printf("%-5.3f\n", -7.3);
	printf("%-5.3f\n", -7.3);
	puts("");
	ft_printf("%-5.6f\n", -7.3);
	printf("%-5.6f\n", -7.3);
	puts("");
	ft_printf("% 5.0f\n", 7.3);
	printf("% 5.0f\n", 7.3);
	puts("");
	ft_printf("% 5.0f\n", -7.3);
	printf("% 5.0f\n", -7.3);
	puts("");
	ft_printf("% 5.1f\n", -7.3);
	printf("% 5.1f\n", -7.3);
	puts("");
	ft_printf("% 5.3f\n", -7.3);
	printf("% 5.3f\n", -7.3);
	puts("");
	ft_printf("% 5.6f\n", -7.3);
	printf("% 5.6f\n", -7.3);
	puts("");
	ft_printf("% -5.0f\n", -7.3);
	printf("% -5.0f\n", -7.3);
	puts("");
	ft_printf("% -5.1f\n", -7.3);
	printf("% -5.1f\n", -7.3);
	puts("");
	ft_printf("% -5.3f\n", -7.3);
	printf("% -5.3f\n", -7.3);
	puts("");
	ft_printf("% -5.6f\n", -7.3);
	printf("% -5.6f\n", -7.3);
	puts("");
	ft_printf("%.0f\n", DBL_MIN);
	printf("%.0f\n", DBL_MIN);
	puts("");
	ft_printf("%.3f\n", DBL_MIN);
	printf("%.3f\n", DBL_MIN);
	puts("");
	ft_printf("%f\n", DBL_MIN);
	printf("%f\n", DBL_MIN);
	puts("");
	ft_printf("%.8f\n", DBL_MIN);
	printf("%.8f\n", DBL_MIN);
	puts("");
	ft_printf("%Lf\n", -985.765426499l);
	printf("%Lf\n", -985.765426499l);
	puts("");
	ft_printf("%Lf\n", -56.2012685l);
	printf("%Lf\n", -56.2012685l);
	puts("");
	ft_printf("%Lf\n", -5.0299999l);
	printf("%Lf\n", -5.0299999l);
	puts("");
	ft_printf("%Lf\n", -5.02999949l);
	printf("%Lf\n", -5.02999949l);
	puts("");
	ft_printf("%Lf\n", -0.99999949l);
	printf("%Lf\n", -0.99999949l);
	puts("");
	ft_printf("%Lf\n", 3.9999999l);
	printf("%Lf\n", 3.9999999l);
	puts("");
	ft_printf("%Lf\n", -5.9999999l);
	printf("%Lf\n", -5.9999999l);
	puts("");
	ft_printf("%.7Lf\n", -3.85l);
	printf("%.7Lf\n", -3.85l);
	puts("");
	ft_printf("%.7Lf\n", -958.125l);
	printf("%.7Lf\n", -958.125l);
	puts("");
	ft_printf("%.7Lf\n", -7.00036l);
	printf("%.7Lf\n", -7.00036l);
	puts("");
	ft_printf("%.7Lf\n", -0.000032l);
	printf("%.7Lf\n", -0.000032l);
	puts("");
	ft_printf("%.7Lf\n", -0.0000001l);
	printf("%.7Lf\n", -0.0000001l);
	puts("");
	ft_printf("%.7Lf\n", -875.000001l);
	printf("%.7Lf\n", -875.000001l);
	puts("");
	ft_printf("%.7Lf\n", -99.9999999l);
	printf("%.7Lf\n", -99.9999999l);
	puts("");
	ft_printf("%.7Lf\n", -0.999999l);
	printf("%.7Lf\n", -0.999999l);
	puts("");
	ft_printf("%.7Lf\n", -985.765426499l);
	printf("%.7Lf\n", -985.765426499l);
	puts("");
	ft_printf("%.7Lf\n", -56.2012685l);
	printf("%.7Lf\n", -56.2012685l);
	puts("");
	ft_printf("%.7Lf\n", -5.0299999l);
	printf("%.7Lf\n", -5.0299999l);
	puts("");
	ft_printf("%.7Lf\n", -5.02999949l);
	printf("%.7Lf\n", -5.02999949l);
	puts("");
	ft_printf("%.7Lf\n", -0.99999949l);
	printf("%.7Lf\n", -0.99999949l);
	puts("");
	ft_printf("%.8Lf\n", -3.85l);
	printf("%.8Lf\n", -3.85l);
	puts("");
	ft_printf("%.8Lf\n", -958.125l);
	printf("%.8Lf\n", -958.125l);
	puts("");
	ft_printf("%.8Lf\n", -7.00036l);
	printf("%.8Lf\n", -7.00036l);
	puts("");
	ft_printf("%.8Lf\n", -0.0000032l);
	printf("%.8Lf\n", -0.0000032l);
	puts("");
	ft_printf("%.8Lf\n", -0.00000001l);
	printf("%.8Lf\n", -0.00000001l);
	ft_printf("%.8Lf\n", -875.000001l);
	printf("%.8Lf\n", -875.000001l);
	ft_printf("%.8Lf\n", -99.99999999l);
	printf("%.8Lf\n", -99.99999999l);
	ft_printf("%.8Lf\n", -0.999999l);
	printf("%.8Lf\n", -0.999999l);
	ft_printf("%.8Lf\n", -985.765426499l);
	printf("%.8Lf\n", -985.765426499l);
	ft_printf("%.8Lf\n", -56.2012685l);
	printf("%.8Lf\n", -56.2012685l);
	ft_printf("%.8Lf\n", -5.0299999l);
	printf("%.8Lf\n", -5.0299999l);
	ft_printf("%.8Lf\n", -5.02999949l);
	printf("%.8Lf\n", -5.02999949l);
	ft_printf("%.8Lf\n", -0.99999949l);
	printf("%.8Lf\n", -0.99999949l);
	ft_printf("%.0Lf\n", LDBL_MIN);
	printf("%.0Lf\n", LDBL_MIN);
	ft_printf("%.3Lf\n", LDBL_MIN);
	printf("%.3Lf\n", LDBL_MIN);
	ft_printf("%Lf\n", LDBL_MIN);
	printf("%Lf\n", LDBL_MIN);
	ft_printf("%.8Lf\n", LDBL_MIN);
	printf("%.8Lf\n", LDBL_MIN);
//
//Test 2573 (moul_f_2) : FAILED.
//    First line of code: {return test("Kashim a %f histoires √† raconter", (double)1001);}
//      expected output : "Kashim a 1001.000000 histoires √† raconter"
//      your output     : "Kashim a 1000.000000 histoires √† raconter"
//      expected (nonprintable as hex) : "Kashim a 1001.000000 histoires √† raconter"
//      actual   (nonprintable as hex) : "Kashim a 1000.000000 histoires √† raconter"
//
//Test 2574 (moul_f_3) : FAILED.
//    First line of code: {return test("Il fait au moins %f
//", (double)-8000);}
//      expected output : "Il fait au moins -8000.000000
//"
//      your output     : "Il fait au moins .000000
//"
//      expected (nonprintable as hex) : "Il fait au moins -8000.000000
//"
//      actual   (nonprintable as hex) : "Il fait au moins .000000
//"
//
//Test 2578 (moul_f_7) : FAILED.
//    First line of code: {return test("%f", (double)INT_MIN);}
//      expected output : "-2147483648.000000"
//      your output     : "0.000000"
//      expected (nonprintable as hex) : "-2147483648.000000"
//      actual   (nonprintable as hex) : "0.000000"
//
//Test 2579 (moul_f_7b) : FAILED.
//    First line of code: {return test("%f", (double)INT_MIN - 1);}
//      expected output : "-2147483649.000000"
//      your output     : "0.&00000"
//      expected (nonprintable as hex) : "-2147483649.000000"
//      actual   (nonprintable as hex) : "0.&00000"
//
//Test 2580 (moul_f_8) : FAILED.
//    First line of code: {return test("%f", (double)INT_MAX + 1);}
//      expected output : "2147483648.000000"
//      your output     : "2147483648.000001"
//      expected (nonprintable as hex) : "2147483648.000000"
//      actual   (nonprintable as hex) : "2147483648.000001"
//
//Test 2581 (moul_f_9) : FAILED.
//    First line of code: {return test("%%f 0000042 == |%f|
//", (double)0000042);}
//      expected output : "%f 0000042 == |34.000000|
//"
//      your output     : "%f 0000042 == |33.000000|
//"
//      expected (nonprintable as hex) : "%f 0000042 == |34.000000|
//"
//      actual   (nonprintable as hex) : "%f 0000042 == |33.000000|
//"
//
//Test 2583 (moul_f_11) : FAILED.
//    First line of code: {return test("%%f Lydie == |%f|
//", (double)'L'+'y'+'d'+'i'+'e');}
//      expected output : "%f Lydie == |503.000000|
//"
//      your output     : "%f Lydie == |502.000000|
//"
//      expected (nonprintable as hex) : "%f Lydie == |503.000000|
//"
//      actual   (nonprintable as hex) : "%f Lydie == |502.000000|
//"
//

	return 0;
}
