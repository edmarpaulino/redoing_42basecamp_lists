#include <stdio.h>
void	ft_div_mod(int	a, int	b, int	*div, int *mod);

int	main(void)
{
	int	num1;
	int	num2;
	int	*div;
	int	*mod;

	num1 = 0;
	num2 = 0;
	div = &num1;
	mod = &num2;
	printf("Before: num1 = %d, num2 = %d\n", num1, num2);
	ft_div_mod(42, 10, div, mod);
	printf("After: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}
