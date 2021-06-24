#include <stdio.h>
void	ft_ultimate_div_mod(int	*a, int	*b);

int	main(void)
{
	int	num1;
	int	num2;
	int	*a;
	int	*b;

	num1 = 42;
	num2 = 10;
	a = &num1;
	b = &num2;
	printf("Before: num1 = %d, num2 = %d\n", num1, num2);
	ft_ultimate_div_mod(a, b);
	printf("After: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}
