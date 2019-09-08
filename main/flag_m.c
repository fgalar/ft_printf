#include <stdio.h>
#include "../ft_printf.h"

void	print_len(int	my_pf, int t_pf)
{
	ft_putstr("\ttaille ft_printf\t");
	ft_putnbr(my_pf);
	ft_putstr("\n\ttaille printf\t\t");
	ft_putnbr(t_pf);
	ft_putstr("\n\n");
}

int	main()
{
	int	i;
	int	y;
	
	ft_putstr("I\n");
	i = ft_printf("'|.21d|' : |%.21d|\n", 0);
	y = printf("'|.21d|' : |%.21d|\n", 0);
	print_len(i, y);

	ft_putstr("II\n");
	i = ft_printf("'| 21|' : |% 21d|\n", 0);
	y = printf("'| 21|' : |% 21d|\n", 0);
	print_len(i, y);

	ft_putstr("III\n");
	i = ft_printf("'|+21d|' : |%+21d|\n", 0);
	y = printf("'|+21d|' : |%+21d|\n", 0);
	print_len(i, y);

	ft_putstr("IV\n");
	i = ft_printf("|%%|\n");
	y = printf("|%%|\n");
	print_len(i, y);

	ft_putstr("V\n");
	i = ft_printf("|%010x|\n", 542);
	y = printf("|%010x|\n", 542);
	print_len(i, y);


	ft_putstr("VI\n");
	i = ft_printf("|%5.2x|\n", 5427);
	y = printf("|%5.2x|\n", 5427);
	print_len(i, y);

	ft_putstr("VII\n");
	i = ft_printf("|%#x|\n", 0);
	y = printf("|%#x|\n", 0);
	print_len(i, y);


	ft_putstr("VIII\n");
	i = ft_printf("|%#8x|\n", 42);
	y = printf("|%#8x|\n", 42);
	print_len(i, y);


	ft_putstr("IX\n");
	i = ft_printf("|%#-08x|\n", 42);
	y = printf("|%#-08x|\n", 42);
	print_len(i, y);


	ft_putstr("X\n");
	i = ft_printf("@moulitest: |%5.x| |%5.0x|\n", 0, 0);
	y = printf("@moulitest: |%5.x| |%5.0x|\n", 0, 0);
	print_len(i, y);


	ft_putstr("XI\n");
	i = ft_printf("%10s is a string\n", "this");
	y = printf("%10s is a string\n", "this");
	print_len(i, y);

	ft_putstr("XII\n");
	i = ft_printf("%10.2s is a string\n", "coucou");
	y = printf("%10.2s is a string\n", "coucou");
	print_len(i, y);

	/*ft_printf("precision = 0 && d = 0                      ==> |%.0d|\n", 0);*/
	/*ft_printf("larg de chmp = 15 && precision = 0 && d = 0 ==> |%15.0d|\n", 0);*/
	/*ft_printf("precision = 0 && d = 42                     ==> |%.0d|\n", 42);*/
	/*ft_printf("precision = 5 et d = 0                      ==> |%.5d|\n", 0);*/
	/*ft_printf("precision = 5 et d = 42                     ==> |%.5d|\n", 42);*/
	/*ft_printf("larg de chmp = 5 et precision = 5 et d = 42 ==> |%5.5d|\n", 42);*/
	/*ft_printf("larg de chmp > precision                    ==> |%25.5d|\n", 42);*/
	/*ft_printf("larg de chmp < precision                    ==> |%5.25d|\n", 42);*/
	/*ft_printf("largeur de chmp > precision et d = 0        ==> |%25.0d|\n", 0);*/
	/*ft_printf("flag 0 & larg chmp 5 & preci 0 & d 42       ==> |%05.0d|\n", 42);*/
	/*ft_printf("flag 0 & precision 0 & d 42                 ==> |%0.0d|\n\n", 42);*/
	/*[>test autour du flag 0 vs largeur de champ vs precision<]*/
	/*ft_printf("avant le d : |%0d|\n", 42);*/
	/*ft_printf("apres largeur de champ : |%.45d|\n", 42);*/


	return (0);
}
