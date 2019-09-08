#include <stdio.h>
/*test autour des precisions*/
int main()
{
	printf("precision = 0 && d = 0                      ==> |%.0d|\n", 0);
	printf("larg de chmp = 15 && precision = 0 && d = 0 ==> |%15.0d|\n", 0);
	printf("precision = 0 && d = 42                     ==> |%.0d|\n", 42);
	printf("precision = 5 et d = 0                      ==> |%.5d|\n", 0);
	printf("precision = 5 et d = 42                     ==> |%.5d|\n", 42);
	printf("larg de chmp = 5 et precision = 5 et d = 42 ==> |%5.5d|\n", 42);
	printf("larg de chmp > precision                    ==> |%25.5d|\n", 42);
	printf("larg de chmp < precision                    ==> |%5.25d|\n", 42);
	printf("largeur de chmp > precision et d = 0        ==> |%25.0d|\n", 0);
	printf("flag 0 & larg chmp 5 & preci 0 & d 42       ==> |%05.0d|\n", 42);
	printf("flag 0 & precision 0 & d 42                 ==> |%0.0d|\n\n", 42);
	/*test autour du flag 0 vs largeur de champ vs precision*/
	printf("avant le d : |%0d|\n", 42);
	printf("apres largeur de champ : |%.45d|\n", 42);
	return (0);
}