#include <stdio.h>
#include <limits.h>
#include "../ft_printf.h"

static void	print_len(int i, int y)
{
	ft_putchar('\t');
	ft_putstr("taille ft_printf\t");
	ft_putnbr(i);
	ft_putstr("\n\t");
	ft_putstr("taille printf\t\t");
	ft_putnbr(y);
	ft_putstr("\n\n");
}

int		main()
{
	int	i;
	int	y;
	puts("\n# 0001");
	i = ft_printf("1. %");
	y = printf("2. %");
	print_len(i, y);	
	

	puts("\n# 0002");
	i = ft_printf("1. % \n");
	y = printf("2. % \n");
	print_len(i, y);	

	puts("\n# 0003");
	i = ft_printf("1. % h\n");
	y = printf("2. % h\n");
	print_len(i, y);	

	puts("\n# 0004");
	i = ft_printf("1. %Z\n");
	y = printf("2. %Z\n");
	print_len(i, y);	

	puts("\n# 0005");
	i = ft_printf("1. % hZ\n");
	y = printf("2. % hZ\n");
	print_len(i, y);	

	puts("\n# 0008");
	i = ft_printf("1. % hZ%\n");
	y = printf("2. % hZ%\n");
	print_len(i, y);	

	puts("\n# 0009 (char *)");
	i = ft_printf("1. % Z\n", "test");
	y = printf("2. % Z\n", "test");
	print_len(i, y);	

	puts("\n# 0010 (char *)");
	i = ft_printf("1. % Z \n", "test");
	y = printf("2. % Z \n", "test");
	print_len(i, y);	

	puts("\n# 0011 (char *)");
	i = ft_printf("1. % Z%s\n", "test");
	y = printf("2. % Z%s\n", "test");
	print_len(i, y);	

	puts("\n# 0013 (char *)");
	i = ft_printf("1. %%% \n", "test");
	y = printf("2. %%% \n", "test");
	print_len(i, y);	

	puts("\n# 0014 (char *)");
	ft_printf("1. %%   %\n", "test");
	printf("2. %%   %\n", "test");

	puts("\n# 0019 (int)");
	ft_printf("1. %llx\n", 9223372036854775807);
	printf("2. %llx\n", 9223372036854775807);

	puts("\n# 0023 (int)");
	ft_printf("1. % Z\n", 42);
	printf("2. % Z\n", 42);

	puts("\n# 0048 (unsigned long long)");
	ft_printf("1. %lhl\n", 9223372036854775807);
	printf("2. %lhl\n", 9223372036854775807);

	puts("\n# 0049 (unsigned long long)");
	ft_printf("1. %lhlz\n", 9223372036854775807);
	printf("2. %lhlz\n", 9223372036854775807);

	puts("\n# 0050 (unsigned long long)");
	ft_printf("1. %zj\n", 9223372036854775807);
	printf("2. %zj\n", 9223372036854775807);

	puts("\n# 0051 (unsigned long)");
	ft_printf("1.	%lhh\n", 2147483647);
	printf("2.	%lhh\n", 2147483647);

	puts("\n# 0015 (int) -> %jx, 4294967295");
	ft_printf("1. %jx\n", 4294967295);
	printf("2. %jx\n", 4294967295);

	puts("\n# 0016 (int) -> %jx, 4294967296");
	ft_printf("1. %jx\n", 4294967296);
	printf("2. %jx\n\n", 4294967296);

	puts("\n 0016 (int)");
	ft_printf("1. %jx\n", -4294967296);
	printf("2. %jx\n", -4294967296);

	puts("\n# 0018 (int)");
	ft_printf("1. %jx\n", -4294967297);
	printf("2. %jx\n", -4294967297);

	puts("\n# 0034 (intmax_t)");
	ft_printf("1. %jd\n", 9223372036854775807);
	printf("2. %jd\n", 9223372036854775807);

	puts("\n# 0035 (intmax_t)");
	ft_printf("1. %jd\n", -9223372036854775808);
	printf("2. %jd\n", -9223372036854775808);

	puts("\n# 0036 (ssize_t)");
	ft_printf("1. %zd\n", 4294967295);
	printf("2. %zd\n", 4294967295);

	puts("\n# 0037 (ssize_t)");
	ft_printf("1. %zd\n", 4294967296);
	printf("2. %zd\n", 4294967296);
	
	puts("\n# 0038 (ssize_t)");
	ft_printf("1. %zd\n", -0);
	printf("2. %zd\n", -0);

	puts("\n# 0039 (ssize_t)");
	ft_printf("1. %zd\n", -1);
	printf("2. %zd\n", -1);

	puts("\n# 0040 (intmax_t)");
	ft_printf("1. %ju\n", 4999999999);
	printf("2. %ju\n", 4999999999);

	puts("\n# 0041 (size_t)");
	ft_printf("1. %ju\n", 4294967296);
	printf("2. %ju\n", 4294967296);

	puts("\n# 0043 (unsigned long)");
	ft_printf("1. %hU\n", 4294967296);
	printf("2. %hU\n", 4294967296);
	
	puts("\n# 0044 (unsigned long)");
	ft_printf("1. %U\n", 4294967296);
	printf("2. %U\n", 4294967296);

	puts("\n# 0045 (size_t)");
	ft_printf("1. %zhd\n", 4294967296);
	printf("2. %zhd\n", 4294967296);

	puts("\n# 0046 (unsigned long long)");
	ft_printf("1. %jzd\n", 9223372036854775807);
	printf("2. %jzd\n", 9223372036854775807);

	puts("\n# 0047 (unsigned long long)");
	ft_printf("1. %jhd\n", 9223372036854775807);
	printf("2. %jhd\n", 9223372036854775807);

	puts("\n# 0049 (unsigned long long)");
	ft_printf("1. %lhlz\n", 9223372036854775807);
	printf("2. %lhlz\n", 9223372036854775807);

	puts("\n# 0050 (unsigned long long)");
	ft_printf("1. %zj\n", 9223372036854775807);
	printf("2. %zj\n", 9223372036854775807);
	
	puts("\n# 0052 (unsigned long)");
	ft_printf("1. %hhld\n", 128);
	printf("2. %hhld\n", 128);
	
	puts("\n# 0055 (int)");
	ft_printf("1. @main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
	printf("2. @main_ftprintf: %###-#0000.12..#20+0d\n", 256);
	
	return (0);
}
