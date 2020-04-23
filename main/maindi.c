#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

int		main(void)
{	
	ft_printf("--------------------%%d-et-%%i--------------------\n");
	printf("01) Vrai PRINTF : |%d|\n", 42);
	ft_printf("01) Mon PRINTF  : |%d|\n", 42);
	printf("02) Vrai PRINTF : |%i|\n", 42);
	ft_printf("02) Mon PRINTF  : |%i|\n", 42);
	printf("03) Vrai PRINTF : |%+d|\n", 42);
	ft_printf("03) Mon PRINTF  : |%+d|\n", 42);
	printf("04) Vrai PRINTF : |%-d|\n", 42);
	ft_printf("04) Mon PRINTF  : |%-d|\n", 42);
	printf("05) Vrai PRINTF : |%10d|\n", 100);
	ft_printf("05) Mon PRINTF  : |%10d|\n", 100);
	printf("06) Vrai PRINTF : |%-10d|\n", 64);
	ft_printf("06) Mon PRINTF  : |%-10d|\n", 64);
	printf("07) Vrai PRINTF : |%.10d|\n", 100);
	ft_printf("07) Mon PRINTF  : |%.10d|\n", 100);
	printf("08) Vrai PRINTF : |%10.5d|\n", 100);
	ft_printf("08) Mon PRINTF  : |%10.5d|\n", 100);
	printf("09) Vrai PRINTF : |%5.10d|\n", 64);
	ft_printf("09) Mon PRINTF  : |%5.10d|\n", 64);
	printf("10) Vrai PRINTF : |%1.1d|\n", 16);
	ft_printf("10) Mon PRINTF  : |%1.1d|\n", 16);
	printf("11) Vrai PRINTF : |%+10d|\n", 50);
	ft_printf("11) Mon PRINTF  : |%+10d|\n", 50);
	printf("12) Vrai PRINTF : |%+2d|\n", 50);
	ft_printf("12) Mon PRINTF  : |%+2d|\n", 50);
	printf("13) Vrai PRINTF : |%+.10d|\n", 50);
	ft_printf("13) Mon PRINTF  : |%+.10d|\n", 50);
	printf("14) Vrai PRINTF : |%+.2d|\n", 50);
	ft_printf("14) Mon PRINTF  : |%+.2d|\n", 50);
	printf("15) Vrai PRINTF : |%          d|\n", 1);
	ft_printf("15) Mon PRINTF  : |%          d|\n", 1);
	printf("16) Vrai PRINTF : |% -d|\n", 1);
	ft_printf("16) Mon PRINTF  : |% -d|\n", 1);
	printf("17) Vrai PRINTF : |%-+d|\n", 32);
	ft_printf("17) Mon PRINTF  : |%-+d|\n", 32);
	printf("18) Vrai PRINTF : |%+-d|\n", 32);
	ft_printf("18) Mon PRINTF  : |%+-d|\n", 32);
	printf("19) Vrai PRINTF : |%-+10d|\n", 42);
	ft_printf("19) Mon PRINTF  : |%-+10d|\n", 42);
	printf("20) Vrai PRINTF : |%-+.10d|\n", 42);
	ft_printf("20) Mon PRINTF  : |%-+.10d|\n", 42);
	printf("21) Vrai PRINTF : |%d|\n", -42);
	ft_printf("21) Mon PRINTF  : |%d|\n", -42);
	printf("22) Vrai PRINTF : |%10d|\n", -42);
	ft_printf("22) Mon PRINTF  : |%10d|\n", -42);
	printf("23) Vrai PRINTF : |%.10d|\n", -42);
	ft_printf("23) Mon PRINTF  : |%.10d|\n", -42);
	printf("24) Vrai PRINTF : |%+d|\n", -10);
	ft_printf("24) Mon PRINTF  : |%+d|\n", -10);
	printf("25) Vrai PRINTF : |%10.5d|\n", -16);
	ft_printf("25) Mon PRINTF  : |%10.5d|\n", -16);
	printf("26) Vrai PRINTF : |%5.10d|\n", -16);
	ft_printf("26) Mon PRINTF  : |%5.10d|\n", -16);
	printf("27) Vrai PRINTF : |%1.1d|\n", -20);
	ft_printf("27) Mon PRINTF  : |%1.1d|\n", -20);
	printf("28) Vrai PRINTF : |%-10d|\n", -50);
	ft_printf("29) Mon PRINTF  : |%-10d|\n", -50);
	printf("30) Vrai PRINTF : |%++++++++++d|\n", 69);
	ft_printf("30) Mon PRINTF  : |%++++++++++d|\n", 69);
	printf("31) Vrai PRINTF : |%+10d|\n", -64);
	ft_printf("31) Mon PRINTF  : |%+10d|\n", -64);
	printf("32) Vrai PRINTF : |%+.10d|\n", -64);
	ft_printf("32) Mon PRINTF  : |%+.10d|\n", -64);
	printf("33) Vrai PRINTF : |%2d|\n", -20);
	ft_printf("33) Mon PRINTF  : |%2d|\n", -20);
	printf("34) Vrai PRINTF : |%.2d|\n", -20);
	ft_printf("34) Mon PRINTF  : |%.2d|\n", -20);
	printf("35) Vrai PRINTF : |%2d|\n", -1);
	ft_printf("35) Mon PRINTF  : |%2d|\n", -1);
	printf("36) Vrai PRINTF : |%.2d|\n", -1);
	ft_printf("36) Mon PRINTF  : |%.2d|\n", -1);
	printf("37) Vrai PRINTF : |%-10d|\n", -80);
	ft_printf("37) Mon PRINTF  : |%-10d|\n", -80);
	printf("38) Vrai PRINTF : |%-.10d|\n", -80);
	ft_printf("38) Mon PRINTF  : |%-.10d|\n", -80);
	printf("39) Vrai PRINTF : |%06d|\n", 35);
	ft_printf("39) Mon PRINTF  : |%06d|\n", 35);
	printf("40) Vrai PRINTF : |%06d|\n", -35);
	ft_printf("40) Mon PRINTF  : |%06d|\n", -35);
	printf("41) Vrai PRINTF : |%-+10d|\n", -40);
	ft_printf("41) Mon PRINTF  : |%-+10d|\n", -40);
	printf("42) Vrai PRINTF : |%+-10d|\n", -40);
	ft_printf("42) Mon PRINTF  : |%+-10d|\n", -40);
	printf("43) Vrai PRINTF : |%05.3d|\n", 5);
	ft_printf("43) Mon PRINTF  : |%05.3d|\n", 5);
	printf("44) Vrai PRINTF : |%03.5d|\n", 5);
	ft_printf("44) Mon PRINTF  : |%03.5d|\n", 5);
	printf("45) Vrai PRINTF : |%05.3d|\n", -5);
	ft_printf("45) Mon PRINTF  : |%05.3d|\n", -5);
	printf("46) Vrai PRINTF : |%03.5d|\n", -5);
	ft_printf("46) Mon PRINTF  : |%03.5d|\n", -5);
	printf("47) Vrai PRINTF : |%d| |%d|\n", INT_MAX, INT_MIN);
	ft_printf("47) Mon PRINTF  : |%d| |%d|\n", INT_MAX, INT_MIN);
	printf("48) Vrai PRINTF : |%d| |%d|\n", INT_MAX + 1, INT_MIN - 1);
	ft_printf("48) Mon PRINTF  : |%d| |%d|\n", INT_MAX + 1, INT_MIN - 1);
	printf("49) Vrai PRINTF : |%.d|\n", 0);
	ft_printf("49) Mon PRINTF  : |%.d|\n", 0);
	printf("50) Vrai PRINTF : |%.d|\n", 100);
	ft_printf("50) Mon PRINTF  : |%.d|\n", 100);
	printf("51) Vrai PRINTF : |%d| |%d| |%d| |%d| |%d| |%d|\n", 42, 100, 25, 16, 30, 69);
	ft_printf("51) Mon PRINTF  : |%d| |%d| |%d| |%d| |%d| |%d|\n", 42, 100, 25, 16, 30, 69);
	printf("52) Vrai PRINTF : |%10d| |%-10d| |%.5d| |%-.5d| |%+d| |%-d|\n", 42, 100, 25, 16, 30, 69);
	ft_printf("52) Mon PRINTF  : |%10d| |%-10d| |%.5d| |%-.5d| |%+d| |%-d|\n", 42, 100, 25, 16, 30, 69);
	printf("53) Vrai PRINTF : |%d| |%d| |%d| |%d| |%d| |%d|\n", -42, -100, -25, -16, -30, -69);
	ft_printf("53) Mon PRINTF  : |%d| |%d| |%d| |%d| |%d| |%d|\n", -42, -100, -25, -16, -30, -69);
	printf("54) Vrai PRINTF : |%10d| |%-10d| |%.5d| |%-.5d| |%+d| |%-d|\n", -42, -100, -25, -16, -30, -69);
	ft_printf("54) Mon PRINTF  : |%10d| |%-10d| |%.5d| |%-.5d| |%+d| |%-d|\n", -42, -100, -25, -16, -30, -69);
	ft_printf("--------------------%%hd-et-%%hi--------------------\n");
	printf("01) Vrai PRINTF : |%hd|\n", (short)42);
	ft_printf("01) Mon PRINTF  : |%hd|\n", (short)42);
	printf("02) Vrai PRINTF : |%hi|\n", (short)42);
	ft_printf("02) Mon PRINTF  : |%hi|\n", (short)42);
	printf("03) Vrai PRINTF : |%+hd|\n", (short)42);
	ft_printf("03) Mon PRINTF  : |%+hd|\n", (short)42);
	printf("04) Vrai PRINTF : |%-hd|\n", (short)42);
	ft_printf("04) Mon PRINTF  : |%-hd|\n", (short)42);
	printf("05) Vrai PRINTF : |%10hd|\n", (short)100);
	ft_printf("05) Mon PRINTF  : |%10hd|\n", (short)100);
	printf("06) Vrai PRINTF : |%-10hd|\n", (short)64);
	ft_printf("06) Mon PRINTF  : |%-10hd|\n", (short)64);
	printf("07) Vrai PRINTF : |%.10hd|\n", (short)100);
	ft_printf("07) Mon PRINTF  : |%.10hd|\n", (short)100);
	printf("08) Vrai PRINTF : |%10.5hd|\n", (short)100);
	ft_printf("08) Mon PRINTF  : |%10.5hd|\n", (short)100);
	printf("09) Vrai PRINTF : |%5.10hd|\n", (short)64);
	ft_printf("09) Mon PRINTF  : |%5.10hd|\n", (short)64);
	printf("10) Vrai PRINTF : |%1.1hd|\n", (short)16);
	ft_printf("10) Mon PRINTF  : |%1.1hd|\n", (short)16);
	printf("11) Vrai PRINTF : |%+10hd|\n", (short)50);
	ft_printf("11) Mon PRINTF  : |%+10hd|\n", (short)50);
	printf("12) Vrai PRINTF : |%+2hd|\n", (short)50);
	ft_printf("12) Mon PRINTF  : |%+2hd|\n", (short)50);
	printf("13) Vrai PRINTF : |%+.10hd|\n", (short)50);
	ft_printf("13) Mon PRINTF  : |%+.10hd|\n", (short)50);
	printf("14) Vrai PRINTF : |%+.2hd|\n", (short)50);
	ft_printf("14) Mon PRINTF  : |%+.2hd|\n", (short)50);
	printf("15) Vrai PRINTF : |%          hd|\n", (short)1);
	ft_printf("15) Mon PRINTF  : |%          hd|\n", (short)1);
	printf("16) Vrai PRINTF : |% -hd|\n", (short)1);
	ft_printf("16) Mon PRINTF  : |% -hd|\n", (short)1);
	printf("17) Vrai PRINTF : |%-+hd|\n", (short)32);
	ft_printf("17) Mon PRINTF  : |%-+hd|\n", (short)32);
	printf("18) Vrai PRINTF : |%+-hd|\n", (short)32);
	ft_printf("18) Mon PRINTF  : |%+-hd|\n", (short)32);
	printf("19) Vrai PRINTF : |%-+10hd|\n", (short)42);
	ft_printf("19) Mon PRINTF  : |%-+10hd|\n", (short)42);
	printf("20) Vrai PRINTF : |%-+.10hd|\n", (short)42);
	ft_printf("20) Mon PRINTF  : |%-+.10hd|\n", (short)42);
	printf("21) Vrai PRINTF : |%hd|\n", (short)-42);
	ft_printf("21) Mon PRINTF  : |%hd|\n", (short)-42);
	printf("22) Vrai PRINTF : |%10hd|\n", (short)-42);
	ft_printf("22) Mon PRINTF  : |%10hd|\n", (short)-42);
	printf("23) Vrai PRINTF : |%.10hd|\n", (short)-42);
	ft_printf("23) Mon PRINTF  : |%.10hd|\n", (short)-42);
	printf("24) Vrai PRINTF : |%+hd|\n", (short)-10);
	ft_printf("24) Mon PRINTF  : |%+hd|\n", (short)-10);
	printf("25) Vrai PRINTF : |%10.5hd|\n", (short)-16);
	ft_printf("25) Mon PRINTF  : |%10.5hd|\n", (short)-16);
	printf("26) Vrai PRINTF : |%5.10hd|\n", (short)-16);
	ft_printf("26) Mon PRINTF  : |%5.10hd|\n", (short)-16);
	printf("27) Vrai PRINTF : |%1.1hd|\n", (short)-20);
	ft_printf("27) Mon PRINTF  : |%1.1hd|\n", (short)-20);
	printf("28) Vrai PRINTF : |%-10hd|\n", (short)-50);
	ft_printf("29) Mon PRINTF  : |%-10hd|\n", (short)-50);
	printf("30) Vrai PRINTF : |%++++++++++hd|\n", (short)69);
	ft_printf("30) Mon PRINTF  : |%++++++++++hd|\n", (short)69);
	printf("31) Vrai PRINTF : |%+10hd|\n", (short)-64);
	ft_printf("31) Mon PRINTF  : |%+10hd|\n", (short)-64);
	printf("32) Vrai PRINTF : |%+.10hd|\n", (short)-64);
	ft_printf("32) Mon PRINTF  : |%+.10hd|\n", (short)-64);
	printf("33) Vrai PRINTF : |%2hd|\n", (short)-20);
	ft_printf("33) Mon PRINTF  : |%2hd|\n", (short)-20);
	printf("34) Vrai PRINTF : |%.2hd|\n", (short)-20);
	ft_printf("34) Mon PRINTF  : |%.2hd|\n", (short)-20);
	printf("35) Vrai PRINTF : |%2hd|\n", (short)-1);
	ft_printf("35) Mon PRINTF  : |%2hd|\n", (short)-1);
	printf("36) Vrai PRINTF : |%.2hd|\n", (short)-1);
	ft_printf("36) Mon PRINTF  : |%.2hd|\n", (short)-1);
	printf("37) Vrai PRINTF : |%-10hd|\n", (short)-80);
	ft_printf("37) Mon PRINTF  : |%-10hd|\n", (short)-80);
	printf("38) Vrai PRINTF : |%-.10hd|\n", (short)-80);
	ft_printf("38) Mon PRINTF  : |%-.10hd|\n", (short)-80);
	printf("39) Vrai PRINTF : |%06hd|\n", (short)35);
	ft_printf("39) Mon PRINTF  : |%06hd|\n", (short)35);
	printf("40) Vrai PRINTF : |%06hd|\n", (short)-35);
	ft_printf("40) Mon PRINTF  : |%06hd|\n", (short)-35);
	printf("41) Vrai PRINTF : |%-+10hd|\n", (short)-40);
	ft_printf("41) Mon PRINTF  : |%-+10hd|\n", (short)-40);
	printf("42) Vrai PRINTF : |%+-10hd|\n", (short)-40);
	ft_printf("42) Mon PRINTF  : |%+-10hd|\n", (short)-40);
	printf("43) Vrai PRINTF : |%05.3hd|\n", (short)5);
	ft_printf("43) Mon PRINTF  : |%05.3hd|\n", (short)5);
	printf("44) Vrai PRINTF : |%03.5hd|\n", (short)5);
	ft_printf("44) Mon PRINTF  : |%03.5hd|\n", (short)5);
	printf("45) Vrai PRINTF : |%05.3hd|\n", (short)-5);
	ft_printf("45) Mon PRINTF  : |%05.3hd|\n", (short)-5);
	printf("46) Vrai PRINTF : |%03.5hd|\n", (short)-5);
	ft_printf("46) Mon PRINTF  : |%03.5hd|\n", (short)-5);
	printf("47) Vrai PRINTF : |%hd| |%hd|\n", (short)32767, (short)-32768);
	ft_printf("47) Mon PRINTF  : |%hd| |%hd|\n", (short)32767, (short)-32768);
	printf("48) Vrai PRINTF : |%hd| |%hd|\n", (short)32768, (short)-32769);
	ft_printf("48) Mon PRINTF  : |%hd| |%hd|\n", (short)32768, (short)-32769);
	printf("49) Vrai PRINTF : |%.hd|\n", (short)0);
	ft_printf("49) Mon PRINTF  : |%.hd|\n", (short)0);
	printf("50) Vrai PRINTF : |%.hd|\n", (short)100);
	ft_printf("50) Mon PRINTF  : |%.hd|\n", (short)100);
	printf("51) Vrai PRINTF : |%hd| |%hd| |%hd| |%hd| |%hd| |%hd|\n", (short)42, (short)100, (short)25, (short)16, (short)30, (short)69);
	ft_printf("51) Mon PRINTF  : |%hd| |%hd| |%hd| |%hd| |%hd| |%hd|\n", (short)42, (short)100, (short)25, (short)16, (short)30, (short)69);
	printf("52) Vrai PRINTF : |%10hd| |%-10hd| |%.5hd| |%-.5hd| |%+hd| |%-hd|\n", (short)42, (short)100, (short)25, (short)16, (short)30, (short)69);
	ft_printf("52) Mon PRINTF  : |%10hd| |%-10hd| |%.5hd| |%-.5hd| |%+hd| |%-hd|\n", (short)42, (short)100, (short)25, (short)16, (short)30, (short)69);
	printf("53) Vrai PRINTF : |%hd| |%hd| |%hd| |%hd| |%hd| |%hd|\n", (short)-42, (short)-100, (short)-25, (short)-16, (short)-30, (short)-69);
	ft_printf("53) Mon PRINTF  : |%hd| |%hd| |%hd| |%hd| |%hd| |%hd|\n", (short)-42, (short)-100, (short)-25, (short)-16, (short)-30, (short)-69);
	printf("54) Vrai PRINTF : |%10hd| |%-10hd| |%.5hd| |%-.5hd| |%+hd| |%-hd|\n", (short)-42, (short)-100, (short)-25, (short)-16, (short)-30, (short)-69);
	ft_printf("54) Mon PRINTF  : |%10hd| |%-10hd| |%.5hd| |%-.5hd| |%+hd| |%-hd|\n", (short)-42, (short)-100, (short)-25, (short)-16, (short)-30, (short)-69);
	ft_printf("--------------------%%hhd-et-%%hhi--------------------\n");
	printf("01) Vrai PRINTF : |%hhd|\n", (char)42);
	ft_printf("01) Mon PRINTF  : |%hhd|\n", (char)42);
	printf("02) Vrai PRINTF : |%hhi|\n", (char)42);
	ft_printf("02) Mon PRINTF  : |%hhi|\n", (char)42);
	printf("03) Vrai PRINTF : |%+hhd|\n", (char)42);
	ft_printf("03) Mon PRINTF  : |%+hhd|\n", (char)42);
	printf("04) Vrai PRINTF : |%-hhd|\n", (char)42);
	ft_printf("04) Mon PRINTF  : |%-hhd|\n", (char)42);
	printf("05) Vrai PRINTF : |%10hhd|\n", (char)100);
	ft_printf("05) Mon PRINTF  : |%10hhd|\n", (char)100);
	printf("06) Vrai PRINTF : |%-10hhd|\n", (char)64);
	ft_printf("06) Mon PRINTF  : |%-10hhd|\n", (char)64);
	printf("07) Vrai PRINTF : |%.10hhd|\n", (char)100);
	ft_printf("07) Mon PRINTF  : |%.10hhd|\n", (char)100);
	printf("08) Vrai PRINTF : |%10.5hhd|\n", (char)100);
	ft_printf("08) Mon PRINTF  : |%10.5hhd|\n", (char)100);
	printf("09) Vrai PRINTF : |%5.10hhd|\n", (char)64);
	ft_printf("09) Mon PRINTF  : |%5.10hhd|\n", (char)64);
	printf("10) Vrai PRINTF : |%1.1hhd|\n", (char)16);
	ft_printf("10) Mon PRINTF  : |%1.1hhd|\n", (char)16);
	printf("11) Vrai PRINTF : |%+10hhd|\n", (char)50);
	ft_printf("11) Mon PRINTF  : |%+10hhd|\n", (char)50);
	printf("12) Vrai PRINTF : |%+2hhd|\n", (char)50);
	ft_printf("12) Mon PRINTF  : |%+2hhd|\n", (char)50);
	printf("13) Vrai PRINTF : |%+.10hhd|\n", (char)50);
	ft_printf("13) Mon PRINTF  : |%+.10hhd|\n", (char)50);
	printf("14) Vrai PRINTF : |%+.2hhd|\n", (char)50);
	ft_printf("14) Mon PRINTF  : |%+.2hhd|\n", (char)50);
	printf("15) Vrai PRINTF : |%          hhd|\n", (char)1);
	ft_printf("15) Mon PRINTF  : |%          hhd|\n", (char)1);
	printf("16) Vrai PRINTF : |% -hhd|\n", (char)1);
	ft_printf("16) Mon PRINTF  : |% -hhd|\n", (char)1);
	printf("17) Vrai PRINTF : |%-+hhd|\n", (char)32);
	ft_printf("17) Mon PRINTF  : |%-+hhd|\n", (char)32);
	printf("18) Vrai PRINTF : |%+-hhd|\n", (char)32);
	ft_printf("18) Mon PRINTF  : |%+-hhd|\n", (char)32);
	printf("19) Vrai PRINTF : |%-+10hhd|\n", (char)42);
	ft_printf("19) Mon PRINTF  : |%-+10hhd|\n", (char)42);
	printf("20) Vrai PRINTF : |%-+.10hhd|\n", (char)42);
	ft_printf("20) Mon PRINTF  : |%-+.10hhd|\n", (char)42);
	printf("21) Vrai PRINTF : |%hhd|\n", (char)-42);
	ft_printf("21) Mon PRINTF  : |%hhd|\n", (char)-42);
	printf("22) Vrai PRINTF : |%10hhd|\n", (char)-42);
	ft_printf("22) Mon PRINTF  : |%10hhd|\n", (char)-42);
	printf("23) Vrai PRINTF : |%.10hhd|\n", (char)-42);
	ft_printf("23) Mon PRINTF  : |%.10hhd|\n", (char)-42);
	printf("24) Vrai PRINTF : |%+hhd|\n", (char)-10);
	ft_printf("24) Mon PRINTF  : |%+hhd|\n", (char)-10);
	printf("25) Vrai PRINTF : |%10.5hhd|\n", (char)-16);
	ft_printf("25) Mon PRINTF  : |%10.5hhd|\n", (char)-16);
	printf("26) Vrai PRINTF : |%5.10hhd|\n", (char)-16);
	ft_printf("26) Mon PRINTF  : |%5.10hhd|\n", (char)-16);
	printf("27) Vrai PRINTF : |%1.1hhd|\n", (char)-20);
	ft_printf("27) Mon PRINTF  : |%1.1hhd|\n", (char)-20);
	printf("28) Vrai PRINTF : |%-10hhd|\n", (char)-50);
	ft_printf("29) Mon PRINTF  : |%-10hhd|\n", (char)-50);
	printf("30) Vrai PRINTF : |%++++++++++hhd|\n", (char)69);
	ft_printf("30) Mon PRINTF  : |%++++++++++hhd|\n", (char)69);
	printf("31) Vrai PRINTF : |%+10hhd|\n", (char)-64);
	ft_printf("31) Mon PRINTF  : |%+10hhd|\n", (char)-64);
	printf("32) Vrai PRINTF : |%+.10hhd|\n", (char)-64);
	ft_printf("32) Mon PRINTF  : |%+.10hhd|\n", (char)-64);
	printf("33) Vrai PRINTF : |%2hhd|\n", (char)-20);
	ft_printf("33) Mon PRINTF  : |%2hhd|\n", (char)-20);
	printf("34) Vrai PRINTF : |%.2hhd|\n", (char)-20);
	ft_printf("34) Mon PRINTF  : |%.2hhd|\n", (char)-20);
	printf("35) Vrai PRINTF : |%2hhd|\n", (char)-1);
	ft_printf("35) Mon PRINTF  : |%2hhd|\n", (char)-1);
	printf("36) Vrai PRINTF : |%.2hhd|\n", (char)-1);
	ft_printf("36) Mon PRINTF  : |%.2hhd|\n", (char)-1);
	printf("37) Vrai PRINTF : |%-10hhd|\n", (char)-80);
	ft_printf("37) Mon PRINTF  : |%-10hhd|\n", (char)-80);
	printf("38) Vrai PRINTF : |%-.10hhd|\n", (char)-80);
	ft_printf("38) Mon PRINTF  : |%-.10hhd|\n", (char)-80);
	printf("39) Vrai PRINTF : |%06hhd|\n", (char)35);
	ft_printf("39) Mon PRINTF  : |%06hhd|\n", (char)35);
	printf("40) Vrai PRINTF : |%06hhd|\n", (char)-35);
	ft_printf("40) Mon PRINTF  : |%06hhd|\n", (char)-35);
	printf("41) Vrai PRINTF : |%-+10hhd|\n", (char)-40);
	ft_printf("41) Mon PRINTF  : |%-+10hhd|\n", (char)-40);
	printf("42) Vrai PRINTF : |%+-10hhd|\n", (char)-40);
	ft_printf("42) Mon PRINTF  : |%+-10hhd|\n", (char)-40);
	printf("43) Vrai PRINTF : |%05.3hhd|\n", (char)5);
	ft_printf("43) Mon PRINTF  : |%05.3hhd|\n", (char)5);
	printf("44) Vrai PRINTF : |%03.5hhd|\n", (char)5);
	ft_printf("44) Vrai PRINTF : |%03.5hhd|\n", (char)5);
	printf("45) Vrai PRINTF : |%05.3hhd|\n", (char)-5);
	ft_printf("45) Mon PRINTF  : |%05.3hhd|\n", (char)-5);
	printf("46) Vrai PRINTF : |%03.5hhd|\n", (char)-5);
	ft_printf("46) Mon PRINTF  : |%03.5hhd|\n", (char)-5);
	printf("47) Vrai PRINTF : |%hhd| |%hhd|\n", (char)127, (char)-128);
	ft_printf("47) Mon PRINTF  : |%hhd| |%hhd|\n", (char)127, (char)-128);
	printf("48) Vrai PRINTF : |%hhd| |%hhd|\n", (char)128, (char)-129);
	ft_printf("48) Mon PRINTF  : |%hhd| |%hhd|\n", (char)128, (char)-129);
	printf("49) Vrai PRINTF : |%.hhd|\n", (char)0);
	ft_printf("49) Mon PRINTF  : |%.hhd|\n", (char)0);
	printf("50) Vrai PRINTF : |%.hhd|\n", (char)100);
	ft_printf("50) Mon PRINTF  : |%.hhd|\n", (char)100);
	printf("51) Vrai PRINTF : |%hhd| |%hhd| |%hhd| |%hhd| |%hhd| |%hhd|\n", (char)42, (char)100, (char)25, (char)16, (char)30, (char)69);
	ft_printf("51) Mon PRINTF  : |%hhd| |%hhd| |%hhd| |%hhd| |%hhd| |%hhd|\n", (char)42, (char)100, (char)25, (char)16, (char)30, (char)69);
	printf("52) Vrai PRINTF : |%10hhd| |%-10hhd| |%.5hhd| |%-.5hhd| |%+hhd| |%-hhd|\n", (char)42, (char)100, (char)25, (char)16, (char)30, (char)69);
	ft_printf("52) Mon PRINTF  : |%10hhd| |%-10hhd| |%.5hhd| |%-.5hhd| |%+hhd| |%-hhd|\n", (char)42, (char)100, (char)25, (char)16, (char)30, (char)69);
	printf("53) Vrai PRINTF : |%hhd| |%hhd| |%hhd| |%hhd| |%hhd| |%hhd|\n", (char)-42, (char)-100, (char)-25, (char)-16, (char)-30, (char)-69);
	ft_printf("53) Mon PRINTF  : |%hhd| |%hhd| |%hhd| |%hhd| |%hhd| |%hhd|\n", (char)-42, (char)-100, (char)-25, (char)-16, (char)-30, (char)-69);
	printf("54) Vrai PRINTF : |%10hhd| |%-10hhd| |%.5hhd| |%-.5hhd| |%+hhd| |%-hhd|\n", (char)-42, (char)-100, (char)-25, (char)-16, (char)-30, (char)-69);
	ft_printf("54) Mon PRINTF  : |%10hhd| |%-10hhd| |%.5hhd| |%-.5hhd| |%+hhd| |%-hhd|\n", (char)-42, (char)-100, (char)-25, (char)-16, (char)-30, (char)-69);
	ft_printf("--------------------%%ld-et-%%li--------------------\n");
	printf("01) Vrai PRINTF : |%ld|\n", (long)42);
	ft_printf("01) Mon PRINTF  : |%ld|\n", (long)42);
	printf("02) Vrai PRINTF : |%li|\n", (long)42);
	ft_printf("02) Mon PRINTF  : |%li|\n", (long)42);
	printf("03) Vrai PRINTF : |%+ld|\n", (long)42);
	ft_printf("03) Mon PRINTF  : |%+ld|\n", (long)42);
	printf("04) Vrai PRINTF : |%-ld|\n", (long)42);
	ft_printf("04) Mon PRINTF  : |%-ld|\n", (long)42);
	printf("05) Vrai PRINTF : |%10ld|\n", (long)100);
	ft_printf("05) Mon PRINTF  : |%10ld|\n", (long)100);
	printf("06) Vrai PRINTF : |%-10ld|\n", (long)64);
	ft_printf("06) Mon PRINTF  : |%-10ld|\n", (long)64);
	printf("07) Vrai PRINTF : |%.10ld|\n", (long)100);
	ft_printf("07) Mon PRINTF  : |%.10ld|\n", (long)100);
	printf("08) Vrai PRINTF : |%10.5ld|\n", (long)100);
	ft_printf("08) Mon PRINTF  : |%10.5ld|\n", (long)100);
	printf("09) Vrai PRINTF : |%5.10ld|\n", (long)64);
	ft_printf("09) Mon PRINTF  : |%5.10ld|\n", (long)64);
	printf("10) Vrai PRINTF : |%1.1ld|\n", (long)16);
	ft_printf("10) Mon PRINTF  : |%1.1ld|\n", (long)16);
	printf("11) Vrai PRINTF : |%+10ld|\n", (long)50);
	ft_printf("11) Mon PRINTF  : |%+10ld|\n", (long)50);
	printf("12) Vrai PRINTF : |%+2ld|\n", (long)50);
	ft_printf("12) Mon PRINTF  : |%+2ld|\n", (long)50);
	printf("13) Vrai PRINTF : |%+.10ld|\n", (long)50);
	ft_printf("13) Mon PRINTF  : |%+.10ld|\n", (long)50);
	printf("14) Vrai PRINTF : |%+.2ld|\n", (long)50);
	ft_printf("14) Mon PRINTF  : |%+.2ld|\n", (long)50);
	printf("15) Vrai PRINTF : |%          ld|\n", (long)1);
	ft_printf("15) Mon PRINTF  : |%          ld|\n", (long)1);
	printf("16) Vrai PRINTF : |% -ld|\n", (long)1);
	ft_printf("16) Mon PRINTF  : |% -ld|\n", (long)1);
	printf("17) Vrai PRINTF : |%-+ld|\n", (long)32);
	ft_printf("17) Mon PRINTF  : |%-+ld|\n", (long)32);
	printf("18) Vrai PRINTF : |%+-ld|\n", (long)32);
	ft_printf("18) Mon PRINTF  : |%+-ld|\n", (long)32);
	printf("19) Vrai PRINTF : |%-+10ld|\n", (long)42);
	ft_printf("19) Mon PRINTF  : |%-+10ld|\n", (long)42);
	printf("20) Vrai PRINTF : |%-+.10ld|\n", (long)42);
	ft_printf("20) Mon PRINTF  : |%-+.10ld|\n", (long)42);
	printf("21) Vrai PRINTF : |%ld|\n", (long)-42);
	ft_printf("21) Mon PRINTF  : |%ld|\n", (long)-42);
	printf("22) Vrai PRINTF : |%10ld|\n", (long)-42);
	ft_printf("22) Mon PRINTF  : |%10ld|\n", (long)-42);
	printf("23) Vrai PRINTF : |%.10ld|\n", (long)-42);
	ft_printf("23) Mon PRINTF  : |%.10ld|\n", (long)-42);
	printf("24) Vrai PRINTF : |%+ld|\n", (long)-10);
	ft_printf("24) Mon PRINTF  : |%+ld|\n", (long)-10);
	printf("25) Vrai PRINTF : |%10.5ld|\n", (long)-16);
	ft_printf("25) Mon PRINTF  : |%10.5ld|\n", (long)-16);
	printf("26) Vrai PRINTF : |%5.10ld|\n", (long)-16);
	ft_printf("26) Mon PRINTF  : |%5.10ld|\n", (long)-16);
	printf("27) Vrai PRINTF : |%1.1ld|\n", (long)-20);
	ft_printf("27) Mon PRINTF  : |%1.1ld|\n", (long)-20);
	printf("28) Vrai PRINTF : |%-10ld|\n", (long)-50);
	ft_printf("29) Mon PRINTF  : |%-10ld|\n", (long)-50);
	printf("30) Vrai PRINTF : |%++++++++++ld|\n", (long)69);
	ft_printf("30) Mon PRINTF  : |%++++++++++ld|\n", (long)69);
	printf("31) Vrai PRINTF : |%+10ld|\n", (long)-64);
	ft_printf("31) Mon PRINTF  : |%+10ld|\n", (long)-64);
	printf("32) Vrai PRINTF : |%+.10ld|\n", (long)-64);
	ft_printf("32) Mon PRINTF  : |%+.10ld|\n", (long)-64);
	printf("33) Vrai PRINTF : |%2ld|\n", (long)-20);
	ft_printf("33) Mon PRINTF  : |%2ld|\n", (long)-20);
	printf("34) Vrai PRINTF : |%.2ld|\n", (long)-20);
	ft_printf("34) Mon PRINTF  : |%.2ld|\n", (long)-20);
	printf("35) Vrai PRINTF : |%2ld|\n", (long)-1);
	ft_printf("35) Mon PRINTF  : |%2ld|\n", (long)-1);
	printf("36) Vrai PRINTF : |%.2ld|\n", (long)-1);
	ft_printf("36) Mon PRINTF  : |%.2ld|\n", (long)-1);
	printf("37) Vrai PRINTF : |%-10ld|\n", (long)-80);
	ft_printf("37) Mon PRINTF  : |%-10ld|\n", (long)-80);
	printf("38) Vrai PRINTF : |%-.10ld|\n", (long)-80);
	ft_printf("38) Mon PRINTF  : |%-.10ld|\n", (long)-80);
	printf("39) Vrai PRINTF : |%06ld|\n", (long)35);
	ft_printf("39) Mon PRINTF  : |%06ld|\n", (long)35);
	printf("40) Vrai PRINTF : |%06ld|\n", (long)-35);
	ft_printf("40) Mon PRINTF  : |%06ld|\n", (long)-35);
	printf("41) Vrai PRINTF : |%-+10ld|\n", (long)-40);
	ft_printf("41) Mon PRINTF  : |%-+10ld|\n", (long)-40);
	printf("42) Vrai PRINTF : |%+-10ld|\n", (long)-40);
	ft_printf("42) Mon PRINTF  : |%+-10ld|\n", (long)-40);
	printf("43) Vrai PRINTF : |%05.3ld|\n", (long)5);
	ft_printf("43) Mon PRINTF  : |%05.3ld|\n", (long)5);
	printf("44) Vrai PRINTF : |%03.5ld|\n", (long)5);
	ft_printf("44) Vrai PRINTF : |%03.5ld|\n", (long)5);
	printf("45) Vrai PRINTF : |%05.3ld|\n", (long)-5);
	ft_printf("45) Mon PRINTF  : |%05.3ld|\n", (long)-5);
	printf("46) Vrai PRINTF : |%03.5ld|\n", (long)-5);
	ft_printf("46) Mon PRINTF  : |%03.5ld|\n", (long)-5);
	printf("47) Vrai PRINTF : |%ld| |%ld|\n", (long)LONG_MAX, (long)LONG_MIN);
	ft_printf("47) Mon PRINTF  : |%ld| |%ld|\n", (long)LONG_MAX, (long)LONG_MIN);
	printf("48) Vrai PRINTF : |%ld| |%ld|\n", (long)LONG_MAX + 1, (long)LONG_MIN - 1);
	ft_printf("48) Mon PRINTF  : |%ld| |%ld|\n", (long)LONG_MAX + 1, (long)LONG_MIN - 1);
	printf("49) Vrai PRINTF : |%.ld|\n", (long)0);
	ft_printf("49) Mon PRINTF  : |%.ld|\n", (long)0);
	printf("50) Vrai PRINTF : |%.ld|\n", (long)100);
	ft_printf("50) Mon PRINTF  : |%.ld|\n", (long)100);
	printf("51) Vrai PRINTF : |%ld| |%ld| |%ld| |%ld| |%ld| |%ld|\n", (long)42, (long)100, (long)25, (long)16, (long)30, (long)69);
	ft_printf("51) Mon PRINTF  : |%ld| |%ld| |%ld| |%ld| |%ld| |%ld|\n", (long)42, (long)100, (long)25, (long)16, (long)30, (long)69);
	printf("52) Vrai PRINTF : |%10ld| |%-10ld| |%.5ld| |%-.5ld| |%+ld| |%-ld|\n", (long)42, (long)100, (long)25, (long)16, (long)30, (long)69);
	ft_printf("52) Mon PRINTF  : |%10ld| |%-10ld| |%.5ld| |%-.5ld| |%+ld| |%-ld|\n", (long)42, (long)100, (long)25, (long)16, (long)30, (long)69);
	printf("53) Vrai PRINTF : |%ld| |%ld| |%ld| |%ld| |%ld| |%ld|\n", (long)-42, (long)-100, (long)-25, (long)-16, (long)-30, (long)-69);
	ft_printf("53) Mon PRINTF  : |%ld| |%ld| |%ld| |%ld| |%ld| |%ld|\n", (long)-42, (long)-100, (long)-25, (long)-16, (long)-30, (long)-69);
	printf("54) Vrai PRINTF : |%10ld| |%-10ld| |%.5ld| |%-.5ld| |%+ld| |%-ld|\n", (long)-42, (long)-100, (long)-25, (long)-16, (long)-30, (long)-69);
	ft_printf("54) Mon PRINTF  : |%10ld| |%-10ld| |%.5ld| |%-.5ld| |%+ld| |%-ld|\n", (long)-42, (long)-100, (long)-25, (long)-16, (long)-30, (long)-69);
	ft_printf("--------------------%%lld-et-%%lli--------------------\n");
	printf("01) Vrai PRINTF : |%lld|\n", (long long)42);
	ft_printf("01) Mon PRINTF  : |%lld|\n", (long long)42);
	printf("02) Vrai PRINTF : |%lli|\n", (long long)42);
	ft_printf("02) Mon PRINTF  : |%lli|\n", (long long)42);
	printf("03) Vrai PRINTF : |%+lld|\n", (long long)42);
	ft_printf("03) Mon PRINTF  : |%+lld|\n", (long long)42);
	printf("04) Vrai PRINTF : |%-lld|\n", (long long)42);
	ft_printf("04) Mon PRINTF  : |%-lld|\n", (long long)42);
	printf("05) Vrai PRINTF : |%10lld|\n", (long long)100);
	ft_printf("05) Mon PRINTF  : |%10lld|\n", (long long)100);
	printf("06) Vrai PRINTF : |%-10lld|\n", (long long)64);
	ft_printf("06) Mon PRINTF  : |%-10lld|\n", (long long)64);
	printf("07) Vrai PRINTF : |%.10lld|\n", (long long)100);
	ft_printf("07) Mon PRINTF  : |%.10lld|\n", (long long)100);
	printf("08) Vrai PRINTF : |%10.5lld|\n", (long long)100);
	ft_printf("08) Mon PRINTF  : |%10.5lld|\n", (long long)100);
	printf("09) Vrai PRINTF : |%5.10lld|\n", (long long)64);
	ft_printf("09) Mon PRINTF  : |%5.10lld|\n", (long long)64);
	printf("10) Vrai PRINTF : |%1.1lld|\n", (long long)16);
	ft_printf("10) Mon PRINTF  : |%1.1lld|\n", (long long)16);
	printf("11) Vrai PRINTF : |%+10lld|\n", (long long)50);
	ft_printf("11) Mon PRINTF  : |%+10lld|\n", (long long)50);
	printf("12) Vrai PRINTF : |%+2lld|\n", (long long)50);
	ft_printf("12) Mon PRINTF  : |%+2lld|\n", (long long)50);
	printf("13) Vrai PRINTF : |%+.10lld|\n", (long long)50);
	ft_printf("13) Mon PRINTF  : |%+.10lld|\n", (long long)50);
	printf("14) Vrai PRINTF : |%+.2lld|\n", (long long)50);
	ft_printf("14) Mon PRINTF  : |%+.2lld|\n", (long long)50);
	printf("15) Vrai PRINTF : |%          lld|\n", (long long)1);
	ft_printf("15) Mon PRINTF  : |%          lld|\n", (long long)1);
	printf("16) Vrai PRINTF : |% -lld|\n", (long long)1);
	ft_printf("16) Mon PRINTF  : |% -lld|\n", (long long)1);
	printf("17) Vrai PRINTF : |%-+lld|\n", (long long)32);
	ft_printf("17) Mon PRINTF  : |%-+lld|\n", (long long)32);
	printf("18) Vrai PRINTF : |%+-lld|\n", (long long)32);
	ft_printf("18) Mon PRINTF  : |%+-lld|\n", (long long)32);
	printf("19) Vrai PRINTF : |%-+10lld|\n", (long long)42);
	ft_printf("19) Mon PRINTF  : |%-+10lld|\n", (long long)42);
	printf("20) Vrai PRINTF : |%-+.10lld|\n", (long long)42);
	ft_printf("20) Mon PRINTF  : |%-+.10lld|\n", (long long)42);
	printf("21) Vrai PRINTF : |%lld|\n", (long long)-42);
	ft_printf("21) Mon PRINTF  : |%lld|\n", (long long)-42);
	printf("22) Vrai PRINTF : |%10lld|\n", (long long)-42);
	ft_printf("22) Mon PRINTF  : |%10lld|\n", (long long)-42);
	printf("23) Vrai PRINTF : |%.10lld|\n", (long long)-42);
	ft_printf("23) Mon PRINTF  : |%.10lld|\n", (long long)-42);
	printf("24) Vrai PRINTF : |%+lld|\n", (long long)-10);
	ft_printf("24) Mon PRINTF  : |%+lld|\n", (long long)-10);
	printf("25) Vrai PRINTF : |%10.5lld|\n", (long long)-16);
	ft_printf("25) Mon PRINTF  : |%10.5lld|\n", (long long)-16);
	printf("26) Vrai PRINTF : |%5.10lld|\n", (long long)-16);
	ft_printf("26) Mon PRINTF  : |%5.10lld|\n", (long long)-16);
	printf("27) Vrai PRINTF : |%1.1lld|\n", (long long)-20);
	ft_printf("27) Mon PRINTF  : |%1.1lld|\n", (long long)-20);
	printf("28) Vrai PRINTF : |%-10lld|\n", (long long)-50);
	ft_printf("29) Mon PRINTF  : |%-10lld|\n", (long long)-50);
	printf("30) Vrai PRINTF : |%++++++++++lld|\n", (long long)69);
	ft_printf("30) Mon PRINTF  : |%++++++++++lld|\n", (long long)69);
	printf("31) Vrai PRINTF : |%+10lld|\n", (long long)-64);
	ft_printf("31) Mon PRINTF  : |%+10lld|\n", (long long)-64);
	printf("32) Vrai PRINTF : |%+.10lld|\n", (long long)-64);
	ft_printf("32) Mon PRINTF  : |%+.10lld|\n", (long long)-64);
	printf("33) Vrai PRINTF : |%2lld|\n", (long long)-20);
	ft_printf("33) Mon PRINTF  : |%2lld|\n", (long long)-20);
	printf("34) Vrai PRINTF : |%.2lld|\n", (long long)-20);
	ft_printf("34) Mon PRINTF  : |%.2lld|\n", (long long)-20);
	printf("35) Vrai PRINTF : |%2lld|\n", (long long)-1);
	ft_printf("35) Mon PRINTF  : |%2lld|\n", (long long)-1);
	printf("36) Vrai PRINTF : |%.2lld|\n", (long long)-1);
	ft_printf("36) Mon PRINTF  : |%.2lld|\n", (long long)-1);
	printf("37) Vrai PRINTF : |%-10lld|\n", (long long)-80);
	ft_printf("37) Mon PRINTF  : |%-10lld|\n", (long long)-80);
	printf("38) Vrai PRINTF : |%-.10lld|\n", (long long)-80);
	ft_printf("38) Mon PRINTF  : |%-.10lld|\n", (long long)-80);
	printf("39) Vrai PRINTF : |%06lld|\n", (long long)35);
	ft_printf("39) Mon PRINTF  : |%06lld|\n", (long long)35);
	printf("40) Vrai PRINTF : |%06lld|\n", (long long)-35);
	ft_printf("40) Mon PRINTF  : |%06lld|\n", (long long)-35);
	printf("41) Vrai PRINTF : |%-+10lld|\n", (long long)-40);
	ft_printf("41) Mon PRINTF  : |%-+10lld|\n", (long long)-40);
	printf("42) Vrai PRINTF : |%+-10lld|\n", (long long)-40);
	ft_printf("42) Mon PRINTF  : |%+-10lld|\n", (long long)-40);
	printf("43) Vrai PRINTF : |%05.3lld|\n", (long long)5);
	ft_printf("43) Mon PRINTF  : |%05.3lld|\n", (long long)5);
	printf("44) Vrai PRINTF : |%03.5lld|\n", (long long)5);
	ft_printf("44) Mon PRINTF  : |%03.5lld|\n", (long long)5);
	printf("45) Vrai PRINTF : |%05.3lld|\n", (long long)-5);
	ft_printf("45) Mon PRINTF  : |%05.3lld|\n", (long long)-5);
	printf("46) Vrai PRINTF : |%03.5lld|\n", (long long)-5);
	ft_printf("46) Mon PRINTF  : |%03.5lld|\n", (long long)-5);
	printf("47) Vrai PRINTF : |%lld| |%lld|\n", (long long)LLONG_MAX, (long long)LLONG_MIN);
	ft_printf("47) Mon PRINTF  : |%lld| |%lld|\n", (long long)LLONG_MAX, (long long)LLONG_MIN);
	printf("48) Vrai PRINTF : |%lld| |%lld|\n", (long long)LLONG_MAX + 1, (long long)LLONG_MIN - 1);
	ft_printf("48) Mon PRINTF  : |%lld| |%lld|\n", (long long)LLONG_MAX + 1, (long long)LLONG_MIN - 1);
	printf("49) Vrai PRINTF : |%.lld|\n", (long long)0);
	ft_printf("49) Mon PRINTF  : |%.lld|\n", (long long)0);
	printf("50) Vrai PRINTF : |%.lld|\n", (long long)100);
	ft_printf("50) Mon PRINTF  : |%.lld|\n", (long long)100);
	printf("51) Vrai PRINTF : |%lld| |%lld| |%lld| |%lld| |%lld| |%lld|\n", (long long)42, (long long)100, (long long)25, (long long)16, (long long)30, (long long)69);
	ft_printf("51) Mon PRINTF  : |%lld| |%lld| |%lld| |%lld| |%lld| |%lld|\n", (long long)42, (long long)100, (long long)25, (long long)16, (long long)30, (long long)69);
	printf("52) Vrai PRINTF : |%10lld| |%-10lld| |%.5lld| |%-.5lld| |%+lld| |%-lld|\n", (long long)42, (long long)100, (long long)25, (long long)16, (long long)30, (long long)69);
	ft_printf("52) Mon PRINTF  : |%10lld| |%-10lld| |%.5lld| |%-.5lld| |%+lld| |%-lld|\n", (long long)42, (long long)100, (long long)25, (long long)16, (long long)30, (long long)69);
	printf("53) Vrai PRINTF : |%lld| |%lld| |%lld| |%lld| |%lld| |%lld|\n", (long long)-42, (long long)-100, (long long)-25, (long long)-16, (long long)-30, (long long)-69);
	ft_printf("53) Mon PRINTF  : |%lld| |%lld| |%lld| |%lld| |%lld| |%lld|\n", (long long)-42, (long long)-100, (long long)-25, (long long)-16, (long long)-30, (long long)-69);
	printf("54) Vrai PRINTF : |%10lld| |%-10lld| |%.5lld| |%-.5lld| |%+lld| |%-lld|\n", (long long)-42, (long long)-100, (long long)-25, (long long)-16, (long long)-30, (long long)-69);
	ft_printf("54) Mon PRINTF  : |%10lld| |%-10lld| |%.5lld| |%-.5lld| |%+lld| |%-lld|\n", (long long)-42, (long long)-100, (long long)-25, (long long)-16, (long long)-30, (long long)-69);
	system("leaks a.out");
	return (0);
}
