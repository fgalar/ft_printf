#include <stdio.h>
#include <inttypes.h>
int	main()
{
	printf("# et + et int = |%+0d\n", 42);
	printf("# et hexa null = |%#x\n", 0);
	printf("# et hexa < 0 = |%#x\n", -42);
	printf("# et hexa > 0 = |%#x\n", 42);
	printf("# et octal null = |%#o\n", 0);
	printf("# et octal < 0 = |%#o\n", -42);
	printf("# et octal > 0 = |%#o\n\n\n", 42);
	
	printf("0 et int = |%0d\n", 42);
	printf("0 et valeur de completion et int = |%010d\n\n", 42);
	printf("- et 0 et valeur de completion et int = |%-010d\n", 42);

	printf("- et int = |%-d\n", 42);
	printf("- et valeur de completion et int = |%-10d\n\n", 42);
	
	printf("SPCE et int = \t\t\t\t\t|% d\n", 42);
	printf("SPCE et conv i = \t\t\t\t|% i\n", 42);
	printf("SPCE et int == 0 = \t\t\t\t|% d\n", 0);
	printf("SPCE et int < 0 = \t\t\t\t|% d\n", -42);

	printf("SPCE et octal = \t\t\t\t|% o\n", 42);
	printf("SPCE et conv u = \t\t\t\t|% u\n", 42);
	printf("SPCE et hexa = \t\t\t\t\t|% x\n", 42);
	printf("SPCE et valeur de completion et int = \t\t|% 10d\n", 42);
	printf("SPCE et - et valeur de completion et in = \t|% -10d\n\n", 42);

	printf("+ et int > 0 = \t\t\t\t\t|%+d\n", 42);
	printf("+ et int == 0 = \t\t\t\t|%+d\n", 0);
	printf("+ et int < 0 = \t\t\t\t\t|%+d\n", -42);
	printf("+ et hexa = \t\t\t\t\t|%+x\n", 42);
	
	printf("\nNEGATIFS\nconv o = %o\tconv u = %u\tconv x = %x\n", -42, -42, -42);
	printf("#neg\nconv d = %#d\tconv o = %#o\tconv u = %#u\tconv x = %#x\n", -42, -42, -42, -42);
	return 0;
}
