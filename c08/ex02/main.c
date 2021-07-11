#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	number;

	number = -3;
	printf("absolute value of %d = %d\n", number, ABS(number));
	number = 3;
	printf("absolute value of %d = %d\n", number, ABS(number));
	return (0);
}
