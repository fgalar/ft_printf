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
	ft_printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.6465424242242, 1444565444646.6465424242242);
 	printf("{%f}{%lf}{%Lf}\n", 1444565444646.6465424242242, 1444565444646.6465424242242,1444565444646.6465424242242);
	puts("");
	ft_printf("8 . %f\n", -958.125);
	printf("8 . %f\n", -958.125);
	puts("");
	ft_printf("9 . %f\n", -7.00036);
	printf("9 . %f\n", -7.00036);
	puts("");
	ft_printf("10 . %f\n", -0.00032);
	printf("10 . %f\n", -0.00032);
	puts("");
	ft_printf("11 . %f\n", -0.000001);
	printf("11 . %f\n", -0.000001);
	puts("");
	ft_printf("12 . %f\n", -875.000001);
	printf("12 . %f\n", -875.000001);
	puts("");
	ft_printf("13 . %f\n", -99.999999);
	printf("13 . %f\n", -99.999999);
	puts("");
	ft_printf("14 . %f\n", -0.999999);
	printf("14 . %f\n", -0.999999);
	puts("");
	ft_printf("15 . %f\n", -985.765426499);
	printf("15 . %f\n", -985.765426499);
	puts("");
	ft_printf("16 . %f\n", -56.2012685);
	printf("16 . %f\n", -56.2012685);
	puts("");
	ft_printf("17 . %f\n", -5.0299999);
	printf("17 . %f\n", -5.0299999);
	puts("");
	ft_printf("18 . %f\n", -5.02999949);
	printf("18 . %f\n", -5.02999949);
	puts("");
	ft_printf("19 . %f\n", -0.99999949);
	printf("19 . %f\n", -0.99999949);
	puts("");
	ft_printf("20 . %f\n", 3.9999999);
	printf("20 . %f\n", 3.9999999);
	puts("");
	ft_printf("21 . %f\n", -5.9999999);
	printf("21 . %f\n", -5.9999999);
	puts("");
	ft_printf("22 . this %.0f float\n", 11.6);
	printf("22 . this %.0f float\n", 11.6);
	puts("");
	ft_printf("23 . %.0f\n", -3.85);
	printf("23 . %.0f\n", -3.85);
	puts("");
	ft_printf("24 . %.0f\n", 573.924);
	printf("24 . %.0f\n", 573.924);
	puts("");
	ft_printf("25 . %.0f\n", -958.125);
	printf("25 . %.0f\n", -958.125);
	puts("");
	ft_printf("26 . %.0f\n", -7.00036);
	printf("26 . %.0f\n", -7.00036);
	puts("");
	ft_printf("27 . %.0f\n", -0.00032);
	printf("27 . %.0f\n", -0.00032);
	puts("");
	ft_printf("28 . %.1f\n", -3.85);
	printf("28 . %.1f\n", -3.85);
	puts("");
	ft_printf("29 . %.1f\n", -958.125);
	printf("29 . %.1f\n", -958.125);
	puts("");
	ft_printf("30 . %.1f\n", -7.00036);
	printf("30 . %.1f\n", -7.00036);
	puts("");
	ft_printf("31 . %.1f\n", -0.00032);
	printf("31 . %.1f\n", -0.00032);
	puts("");
	ft_printf("32 . %.3f\n", -3.85);
	printf("32 . %.3f\n", -3.85);
	puts("");
	ft_printf("33 . %.3f\n", -958.125);
	printf("33 . %.3f\n", -958.125);
	puts("");
	ft_printf("34 . %.3f\n", -7.00036);
	printf("34 . %.3f\n", -7.00036);
	puts("");
	ft_printf("35 . %.3f\n", -0.00032);
	printf("35 . %.3f\n", -0.00032);
	puts("");
	ft_printf("36 . %.7f\n", -3.85);
	printf("36 . %.7f\n", -3.85);
	puts("");
	ft_printf("37 . %.7f\n", -958.125);
	printf("37 . %.7f\n", -958.125);
	puts("");
	ft_printf("38 . %.7f\n", -7.00036);
	printf("38 . %.7f\n", -7.00036);
	puts("");
	ft_printf("39 . %.7f\n", -0.000032);
	printf("39 . %.7f\n", -0.000032);
	puts("");
	ft_printf("40 . %.7f\n", -0.0000001);
	printf("40 . %.7f\n", -0.0000001);
	puts("");
	ft_printf("41 . %.7f\n", -875.000001);
	printf("41 . %.7f\n", -875.000001);
	puts("");
	ft_printf("42 . %.7f\n", -99.9999999);
	printf("42 . %.7f\n", -99.9999999);
	puts("");
	ft_printf("43 . %.7f\n", -0.999999);
	printf("43 . %.7f\n", -0.999999);
	puts("");
	ft_printf("44 . %.7f\n", -985.765426499);
	printf("44 . %.7f\n", -985.765426499);
	puts("");
	ft_printf("45 . %.7f\n", -56.2012685);
	printf("45 . %.7f\n", -56.2012685);
	puts("");
	ft_printf("46 . %.7f\n", -5.0299999);
	printf("46 . %.7f\n", -5.0299999);
	puts("");
	ft_printf("47 . %.7f\n", -5.02999949);
	printf("47 . %.7f\n", -5.02999949);
	puts("");
	ft_printf("48 . %.7f\n", -0.99999949);
	printf("48 . %.7f\n", -0.99999949);
	puts("");
	ft_printf("49 . %.8f\n", -3.85);
	printf("49 . %.8f\n", -3.85);
	puts("");
	ft_printf("50 . %.8f\n", -958.125);
	printf("50 . %.8f\n", -958.125);
	puts("");
	ft_printf("51 . %.8f\n", -7.00036);
	printf("51 . %.8f\n", -7.00036);
	puts("");
	ft_printf("52 . %.8f\n", -0.0000032);
	printf("52 . %.8f\n", -0.0000032);
	puts("");
	ft_printf("53 . %.8f\n", -0.00000001);
	printf("53 . %.8f\n", -0.00000001);
	puts("");
	ft_printf("54 . %.8f\n", -875.000001);
	printf("54 . %.8f\n", -875.000001);
	puts("");
	ft_printf("55 . %.8f\n", -99.99999999);
	printf("55 . %.8f\n", -99.99999999);
	puts("");
	ft_printf("56 . %.8f\n", -0.999999);
	printf("56 . %.8f\n", -0.999999);
	puts("");
	ft_printf("57 . %.8f\n", -985.765426499);
	printf("57 . %.8f\n", -985.765426499);
	puts("");
	ft_printf("58 . %.8f\n", -56.2012685);
	printf("58 . %.8f\n", -56.2012685);
	puts("");
	ft_printf("59 . %.8f\n", -5.0299999);
	printf("59 . %.8f\n", -5.0299999);
	puts("");
	ft_printf("60 . %.8f\n", -5.02999949);
	printf("60 . %.8f\n", -5.02999949);
	puts("");
	ft_printf("61 . %.8f\n", -0.99999949);
	printf("61 . %.8f\n", -0.99999949);
	puts("");
	ft_printf("62 . %#.0f\n", -7.4);
	printf("62 . %#.0f\n", -7.4);
	puts("");
	ft_printf("63 . %#.1f\n", -7.3);
	printf("63 . %#.1f\n", -7.3);
	puts("");
	ft_printf("64 . %5.0f\n", 7.3);
	printf("64 . %5.0f\n", 7.3);
	puts("");
	ft_printf("65 . %5.0f\n", -7.3);
	printf("65 . %5.0f\n", -7.3);
	puts("");
	ft_printf("66 . %5.1f\n", -7.3);
	printf("66 . %5.1f\n", -7.3);
	puts("");
	ft_printf("67 . %5.3f\n", -7.3);
	printf("67 . %5.3f\n", -7.3);
	puts("");
	ft_printf("68 . %5.6f\n", -7.3);
	printf("68 . %5.6f\n", -7.3);
	puts("");
	ft_printf("69 . %-5.0f\n", -7.3);
	printf("69 . %-5.0f\n", -7.3);
	puts("");
	ft_printf("70 . %-5.1f\n", -7.3);
	printf("70 . %-5.1f\n", -7.3);
	puts("");
	ft_printf("71 . %-5.3f\n", -7.3);
	printf("71 . %-5.3f\n", -7.3);
	puts("");
	ft_printf("72 . %-5.6f\n", -7.3);
	printf("72 . %-5.6f\n", -7.3);
	puts("");
	ft_printf("73 . % 5.0f\n", 7.3);
	printf("73 . % 5.0f\n", 7.3);
	puts("");
	ft_printf("74 . % 5.0f\n", -7.3);
	printf("74 . % 5.0f\n", -7.3);
	puts("");
	ft_printf("75 . % 5.1f\n", -7.3);
	printf("75 . % 5.1f\n", -7.3);
	puts("");
	ft_printf("76 . % 5.3f\n", -7.3);
	printf("76 . % 5.3f\n", -7.3);
	puts("");
	ft_printf("77 . % 5.6f\n", -7.3);
	printf("77 . % 5.6f\n", -7.3);
	puts("");
	ft_printf("78 . % -5.0f\n", -7.3);
	printf("78 . % -5.0f\n", -7.3);
	puts("");
	ft_printf("79 . % -5.1f\n", -7.3);
	printf("79 . % -5.1f\n", -7.3);
	puts("");
	ft_printf("80 . % -5.3f\n", -7.3);
	printf("80 . % -5.3f\n", -7.3);
	puts("");
	ft_printf("81 . % -5.6f\n", -7.3);
	printf("81 . % -5.6f\n", -7.3);
	puts("");
	ft_printf("82 . %.0f\n", DBL_MIN);
	printf("82 . %.0f\n", DBL_MIN);
	puts("");
	ft_printf("83 . %.3f\n", DBL_MIN);
	printf("83 . %.3f\n", DBL_MIN);
	puts("");
	ft_printf("84 . %f\n", DBL_MIN);
	printf("84 . %f\n", DBL_MIN);
	puts("");
	ft_printf("85 . %.8f\n", DBL_MIN);
	printf("85 . %.8f\n", DBL_MIN);
	puts("");
	ft_printf("86 . %Lf\n", -985.765426499l);
	printf("86 . %Lf\n", -985.765426499l);
	puts("");
	ft_printf("87 . %Lf\n", -56.2012685l);
	printf("87 . %Lf\n", -56.2012685l);
	puts("");
	ft_printf("88 . %Lf\n", -5.0299999l);
	printf("88 . %Lf\n", -5.0299999l);
	puts("");
	ft_printf("89 . %Lf\n", -5.02999949l);
	printf("89 . %Lf\n", -5.02999949l);
	puts("");
	ft_printf("90 . %Lf\n", -0.99999949l);
	printf("90 . %Lf\n", -0.99999949l);
	puts("");
	ft_printf("91 . %Lf\n", 3.9999999l);
	printf("91 . %Lf\n", 3.9999999l);
	puts("");
	ft_printf("92 . %Lf\n", -5.9999999l);
	printf("92 . %Lf\n", -5.9999999l);
	puts("");
	ft_printf("93 . %.7Lf\n", -3.85l);
	printf("93 . %.7Lf\n", -3.85l);
	puts("");
	ft_printf("94 . %.7Lf\n", -958.125l);
	printf("94 . %.7Lf\n", -958.125l);
	puts("");
	ft_printf("95 . %.7Lf\n", -7.00036l);
	printf("95 . %.7Lf\n", -7.00036l);
	puts("");
	ft_printf("96 . %.7Lf\n", -0.000032l);
	printf("96 . %.7Lf\n", -0.000032l);
	puts("");
	ft_printf("97 . %.7Lf\n", -0.0000001l);
	printf("97 . %.7Lf\n", -0.0000001l);
	puts("");
	ft_printf("98 . %.7Lf\n", -875.000001l);
	printf("98 . %.7Lf\n", -875.000001l);
	puts("");
	ft_printf("99 . %.7Lf\n", -99.9999999l);
	printf("99 . %.7Lf\n", -99.9999999l);
	puts("");
	ft_printf("100 . %.7Lf\n", -0.999999l);
	printf("100 . %.7Lf\n", -0.999999l);
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
