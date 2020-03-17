#include <stdio.h>
#include "../ft_printf.h"
/*test autour des precisions*/
int main()
{
	ft_printf("precision = 0 && d = 0                      ==> |%.0d|\n", 0);
	printf("precision = 0 && d = 0                      ==> |%.0d|\n", 0);
	ft_printf("larg de chmp = 15 && precision = 0 && d = 0 ==> |%15.0d|\n", 0);
	printf("larg de chmp = 15 && precision = 0 && d = 0 ==> |%15.0d|\n", 0);
	ft_printf("precision = 0 && d = 42                     ==> |%.0d|\n", 42);
	printf("precision = 0 && d = 42                     ==> |%.0d|\n", 42);
	ft_printf("precision = 5 et d = 0                      ==> |%.5d|\n", 0);
	printf("precision = 5 et d = 0                      ==> |%.5d|\n", 0);
	ft_printf("precision = 5 et d = 42                     ==> |%.5d|\n", 42);
	printf("precision = 5 et d = 42                     ==> |%.5d|\n", 42);
	ft_printf("larg de chmp = 5 et precision = 5 et d = 42 ==> |%5.5d|\n", 42);
	printf("larg de chmp = 5 et precision = 5 et d = 42 ==> |%5.5d|\n", 42);
	ft_printf("larg de chmp > precision                    ==> |%25.5d|\n", 42);
	printf("larg de chmp > precision                    ==> |%25.5d|\n", 42);
	ft_printf("larg de chmp < precision                    ==> |%5.25d|\n", 42);
	printf("larg de chmp < precision                    ==> |%5.25d|\n", 42);
	ft_printf("largeur de chmp > precision et d = 0        ==> |%25.0d|\n", 0);
	printf("largeur de chmp > precision et d = 0        ==> |%25.0d|\n", 0);
	ft_printf("flag 0 & larg chmp 5 & preci 0 & d 42       ==> |%05.0d|\n", 42);
	printf("flag 0 & larg chmp 5 & preci 0 & d 42       ==> |%05.0d|\n", 42);
	ft_printf("flag 0 & precision 0 & d 42                 ==> |%0.0d|\n\n", 42);
	printf("flag 0 & precision 0 & d 42                 ==> |%0.0d|\n\n", 42);
	/*test autour du flag 0 vs largeur de champ vs precision*/
	ft_printf("avant le d : |%0d|\n", 42);
	printf("avant le d : |%0d|\n", 42);
	ft_printf("apres largeur de champ : |%.45d|\n", 42);
	printf("apres largeur de champ : |%.45d|\n", 42);
	ft_printf("neg + flag 0 + champ = 	  |%010d|\n", -42);
	printf("neg + flag 0 + champ = 	  |%010d|\n", -42);
	ft_printf("neg + precision + champ = |%10.10d|\n", -42);
	printf("neg + precision + champ = |%10.10d|\n", -42);
	ft_printf("%4Z", 4);
	printf("%4Z", 4);
	return (0);
}
