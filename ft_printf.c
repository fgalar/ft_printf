
#include <stdarg.h>
#include "include/ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	
	t_buff		*buffer;
	va_list		args;
	

	while (format[i] != '%')
		i++;
	if (format[i + 1] == 'd')
		
	ft_putchar(format[i]);
	va_start(args, format);

//	nb = va_arg(args, int);
//	ft_putnbr(nb);

	va_end(args);
	return (0);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	printf(" coucou %d\n\n", 9);
	ft_printf("coucou %d\n", 9);
	return (0);
}
