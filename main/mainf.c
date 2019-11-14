#include <stdio.h>
#include "../ft_printf.h"


int		main(void)
{
	ft_printf("--------------------%%f--------------------\n");
	printf("01) VRAI PRINTF : |%f|\n", 42.42);
	ft_printf("01) MON PRINTF  : |%f|\n", 42.42);
	exit(1);
	printf("02) VRAI PRINTF : |%f|\n", 42.4242421);
	ft_printf("02) MON PRINTF  : |%f|\n", 42.4242421);
	printf("03) VRAI PRINTF : |%15f|\n", 10.1111111);
	ft_printf("03) MON PRINTF  : |%15f|\n", 10.1111111);
	printf("04) VRAI PRINTF : |%.10f|\n", 25.98428445642615313253);
	ft_printf("04) MON PRINTF  : |%.10f|\n", 25.98428445642615313253);
	printf("05) VRAI PRINTF : |%.2f|\n", 85.111);
	ft_printf("05) MON PRINTF  : |%.2f|\n", 85.111);
	printf("06) VRAI PRINTF : |%.0f|\n", 55.0000222);
	ft_printf("06) MON PRINTF  : |%.0f|\n", 55.0000222);
	printf("07) VRAI PRINTF : |%0f|\n", (double)52);
	ft_printf("07) MON PRINTF  : |%0f|\n", (double)52);
	printf("08) VRAI PRINTF : |%f|\n", (double)0);
	ft_printf("08) MON PRINTF  : |%f|\n", (double)0);
	printf("09) VRAI PRINTF : |%f|\n", 0.5551);
	ft_printf("09) MON PRINTF  : |%f|\n", 0.5551);
	printf("10) VRAI PRINTF : |%10.2f|\n", 10.21111111);
	ft_printf("10) MON PRINTF  : |%10.2f|\n", 10.21111111);
	printf("11) VRAI PRINTF : |%+5f|\n", 10.5);
	ft_printf("11) MON PRINTF  : |%+5f|\n", 10.5);
	printf("12) VRAI PRINTF : |%0f|\n", 77.2);
	ft_printf("12) MON PRINTF  : |%0f|\n", 77.2);
	printf("13) VRAI PRINTF : |%#f|\n", 42.42);
	ft_printf("13) MON PRINTF  : |%#f|\n", 42.42);
	printf("14) VRAI PRINTF : |%#f|\n", 42.4242421);
	ft_printf("14) MON PRINTF  : |%#f|\n", 42.4242421);
	printf("15) VRAI PRINTF : |%#15f|\n", 10.1111111);
	ft_printf("15) MON PRINTF  : |%#15f|\n", 10.1111111);
	printf("16) VRAI PRINTF : |%#.10f|\n", 25.98428445642615313253);
	ft_printf("16) MON PRINTF  : |%#.10f|\n", 25.98428445642615313253);
	printf("17) VRAI PRINTF : |%#.2f|\n", 85.111);
	ft_printf("17) MON PRINTF  : |%#.2f|\n", 85.111);
	printf("18) VRAI PRINTF : |%#.0f|\n", 55.0000222);
	ft_printf("18) MON PRINTF  : |%#.0f|\n", 55.0000222);
	printf("19) VRAI PRINTF : |%#0f|\n", (double)52);
	ft_printf("19) MON PRINTF  : |%#0f|\n", (double)52);
	printf("20) VRAI PRINTF : |%#f|\n", (double)0);
	ft_printf("20) MON PRINTF  : |%#f|\n", (double)0);
	printf("21) VRAI PRINTF : |%#f|\n", 0.5551);
	ft_printf("21) MON PRINTF  : |%#f|\n", 0.5551);
	printf("22) VRAI PRINTF : |%#10.2f|\n", 10.21111111);
	ft_printf("22) MON PRINTF  : |%#10.2f|\n", 10.21111111);
	printf("23) VRAI PRINTF : |%#+5f|\n", 10.5);
	ft_printf("23) MON PRINTF  : |%#+5f|\n", 10.5);
	printf("24) VRAI PRINTF : |%#0f|\n", 77.2);
	ft_printf("24) MON PRINTF  : |%#0f|\n", 77.2);
	ft_printf("--------------------%%lf--------------------\n");
	printf("01) VRAI PRINTF : |%lf|\n", 42.42);
	ft_printf("01) MON PRINTF  : |%lf|\n", 42.42);
	printf("02) VRAI PRINTF : |%lf|\n", 42.4242421);
	ft_printf("02) MON PRINTF  : |%lf|\n", 42.4242421);
	printf("03) VRAI PRINTF : |%15lf|\n", 10.1111111);
	ft_printf("03) MON PRINTF  : |%15lf|\n", 10.1111111);
	printf("04) VRAI PRINTF : |%.10lf|\n", 25.98428445642615313253);
	ft_printf("04) MON PRINTF  : |%.10lf|\n", 25.98428445642615313253);
	printf("05) VRAI PRINTF : |%.2lf|\n", 85.111);
	ft_printf("05) MON PRINTF  : |%.2lf|\n", 85.111);
	printf("06) VRAI PRINTF : |%.0lf|\n", 55.0000222);
	ft_printf("06) MON PRINTF  : |%.0lf|\n", 55.0000222);
	printf("07) VRAI PRINTF : |%0lf|\n", (double)52);
	ft_printf("07) MON PRINTF  : |%0lf|\n", (double)52);
	printf("08) VRAI PRINTF : |%lf|\n", (double)0);
	ft_printf("08) MON PRINTF  : |%lf|\n", (double)0);
	printf("09) VRAI PRINTF : |%lf|\n", 0.5551);
	ft_printf("09) MON PRINTF  : |%lf|\n", 0.5551);
	printf("10) VRAI PRINTF : |%10.2lf|\n", 10.21111111);
	ft_printf("10) MON PRINTF  : |%10.2lf|\n", 10.21111111);
	printf("11) VRAI PRINTF : |%+5lf|\n", 10.5);
	ft_printf("11) MON PRINTF  : |%+5lf|\n", 10.5);
	printf("12) VRAI PRINTF : |%0lf|\n", 77.2);
	ft_printf("12) MON PRINTF  : |%0lf|\n", 77.2);
	printf("13) VRAI PRINTF : |%#lf|\n", 42.42);
	ft_printf("13) MON PRINTF  : |%#lf|\n", 42.42);
	printf("14) VRAI PRINTF : |%#lf|\n", 42.4242421);
	ft_printf("14) MON PRINTF  : |%#lf|\n", 42.4242421);
	printf("15) VRAI PRINTF : |%#15lf|\n", 10.1111111);
	ft_printf("15) MON PRINTF  : |%#15lf|\n", 10.1111111);
	printf("16) VRAI PRINTF : |%#.10lf|\n", 25.98428445642615313253);
	ft_printf("16) MON PRINTF  : |%#.10lf|\n", 25.98428445642615313253);
	printf("17) VRAI PRINTF : |%#.2lf|\n", 85.111);
	ft_printf("17) MON PRINTF  : |%#.2lf|\n", 85.111);
	printf("18) VRAI PRINTF : |%#.0lf|\n", 55.0000222);
	ft_printf("18) MON PRINTF  : |%#.0lf|\n", 55.0000222);
	printf("19) VRAI PRINTF : |%#0lf|\n", (double)52);
	ft_printf("19) MON PRINTF  : |%#0lf|\n", (double)52);
	printf("20) VRAI PRINTF : |%#lf|\n", (double)0);
	ft_printf("20) MON PRINTF  : |%#lf|\n", (double)0);
	printf("21) VRAI PRINTF : |%#lf|\n", 0.5551);
	ft_printf("21) MON PRINTF  : |%#lf|\n", 0.5551);
	printf("22) VRAI PRINTF : |%#10.2lf|\n", 10.21111111);
	ft_printf("22) MON PRINTF  : |%#10.2lf|\n", 10.21111111);
	printf("23) VRAI PRINTF : |%#+5lf|\n", 10.5);
	ft_printf("23) MON PRINTF  : |%#+5lf|\n", 10.5);
	printf("24) VRAI PRINTF : |%#0lf|\n", 77.2);
	ft_printf("24) MON PRINTF  : |%#0lf|\n", 77.2);
	ft_printf("--------------------%%Lf--------------------\n");
	printf("01) VRAI PRINTF : |%Lf|\n", (long double)42.42);
	ft_printf("01) MON PRINTF  : |%Lf|\n", (long double)42.42);
	printf("02) VRAI PRINTF : |%Lf|\n", (long double)42.4242421);
	ft_printf("02) MON PRINTF  : |%Lf|\n", (long double)42.4242421);
	printf("03) VRAI PRINTF : |%15Lf|\n", (long double)10.1111111);
	ft_printf("03) MON PRINTF  : |%15Lf|\n", (long double)10.1111111);
	printf("04) VRAI PRINTF : |%.10Lf|\n", (long double)25.98428445642615313253);
	ft_printf("04) MON PRINTF  : |%.10Lf|\n", (long double)25.98428445642615313253);
	printf("05) VRAI PRINTF : |%.2Lf|\n", (long double)85.111);
	ft_printf("05) MON PRINTF  : |%.2Lf|\n", (long double)85.111);
	printf("06) VRAI PRINTF : |%.0Lf|\n", (long double)55.0000222);
	ft_printf("06) MON PRINTF  : |%.0Lf|\n", (long double)55.0000222);
	printf("07) VRAI PRINTF : |%0Lf|\n", (long double)52);
	ft_printf("07) MON PRINTF  : |%0Lf|\n", (long double)52);
	printf("08) VRAI PRINTF : |%Lf|\n", (long double)0);
	ft_printf("08) MON PRINTF  : |%Lf|\n", (long double)0);
	printf("09) VRAI PRINTF : |%Lf|\n", (long double)0.5551);
	ft_printf("09) MON PRINTF  : |%Lf|\n", (long double)0.5551);
	printf("10) VRAI PRINTF : |%10.2Lf|\n", (long double)10.21111111);
	ft_printf("10) MON PRINTF  : |%10.2Lf|\n", (long double)10.21111111);
	printf("11) VRAI PRINTF : |%+5Lf|\n", (long double)10.5);
	ft_printf("11) MON PRINTF  : |%+5Lf|\n", (long double)10.5);
	printf("12) VRAI PRINTF : |%0Lf|\n", (long double)77.2);
	ft_printf("12) MON PRINTF  : |%0Lf|\n", (long double)77.2);
	printf("13) VRAI PRINTF : |%#Lf|\n", (long double)42.42);
	ft_printf("13) MON PRINTF  : |%#Lf|\n", (long double)42.42);
	printf("14) VRAI PRINTF : |%#Lf|\n", (long double)42.4242421);
	ft_printf("14) MON PRINTF  : |%#Lf|\n", (long double)42.4242421);
	printf("15) VRAI PRINTF : |%#15Lf|\n", (long double)10.1111111);
	ft_printf("15) MON PRINTF  : |%#15Lf|\n", (long double)10.1111111);
	printf("16) VRAI PRINTF : |%#.10Lf|\n", (long double)25.98428445642615313253);
	ft_printf("16) MON PRINTF  : |%#.10Lf|\n", (long double)25.98428445642615313253);
	printf("17) VRAI PRINTF : |%#.2Lf|\n", (long double)85.111);
	ft_printf("17) MON PRINTF  : |%#.2Lf|\n", (long double)85.111);
	printf("18) VRAI PRINTF : |%#.0Lf|\n", (long double)55.0000222);
	ft_printf("18) MON PRINTF  : |%#.0Lf|\n", (long double)55.0000222);
	printf("19) VRAI PRINTF : |%#0Lf|\n", (long double)52);
	ft_printf("19) MON PRINTF  : |%#0Lf|\n", (long double)52);
	printf("20) VRAI PRINTF : |%#Lf|\n", (long double)0);
	ft_printf("20) MON PRINTF  : |%#Lf|\n", (long double)0);
	printf("21) VRAI PRINTF : |%#Lf|\n", (long double)0.5551);
	ft_printf("21) MON PRINTF  : |%#Lf|\n", (long double)0.5551);
	printf("22) VRAI PRINTF : |%#10.2Lf|\n", (long double)10.21111111);
	ft_printf("22) MON PRINTF  : |%#10.2Lf|\n", (long double)10.21111111);
	printf("23) VRAI PRINTF : |%#+5Lf|\n", (long double)10.5);
	ft_printf("23) MON PRINTF  : |%#+5Lf|\n", (long double)10.5);
	printf("24) VRAI PRINTF : |%#0Lf|\n", (long double)77.2);
	ft_printf("24) MON PRINTF  : |%#0Lf|\n", (long double)77.2);
	return (0);
}
