#include <stdio.h>
#include "../ft_printf.h"

int	main()
{
	printf("precision null et d => |%.0d| && |%.d|\n", 0, 0);
	ft_printf("precision null et d => |%.0d| && |%.d|\n", 0, 0);
	printf("precision null et i => |%.0i| && |%.i|\n", 0, 0);
	ft_printf("precision null et i => |%.0i| && |%.i|\n", 0, 0);
	printf("precision null et o => |%.0o| && |%.o|\n", 0, 0);
	ft_printf("precision null et o => |%.0o| && |%.o|\n", 0, 0);
	printf("precision null et u => |%.0u| && |%.u|\n", 0, 0);
	ft_printf("precision null et u => |%.0u| && |%.u|\n", 0, 0);
	printf("precision null et x => |%.0x| && |%.x|\n", 0, 0);
	ft_printf("precision null et x => |%.0x| && |%.x|\n", 0, 0);

	printf("diese et precision null et d => |%#.d|\n", 0);
	ft_printf("diese et precision null et d => |%#.d|\n", 0);
	printf("diese et precision null et u => |%#.u|\n", 0);
	ft_printf("diese et precision null et u => |%#.u|\n", 0);
	printf("diese et precision null et o => |%#.o|\n", 0);
	ft_printf("diese et precision null et o => |%#.o|\n", 0);
	printf("diese et precision null et x => |%#.x|\n", 0);
	ft_printf("diese et precision null et x => |%#.x|\n", 0);

	printf("%.5oi\n", 34);
	
	ft_putnbr(ft_atoi(".42"));	
	return 0;
}
