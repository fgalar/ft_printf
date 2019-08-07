#include <stdio.h>

int	main()
{
	printf("int to x (#) = |%#x\n", 42);
	printf("+int = |%+d\n", 42);
	printf("spaceint = |% d\n", 42);
	printf("-int = |%-d\n", 42);
	printf("0int = |%0d\n", 42);
	printf("prct = |%%\n");
	return 0;
}
