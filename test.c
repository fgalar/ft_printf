#include "ft_printf.h"
#include <stdio.h>
int		main()
{
	t_float	flote;
	float	f = -0.0;

	flote.fl = f;
	printf("%d\n", flote.b_count.sign);
	
	return 0;
}
