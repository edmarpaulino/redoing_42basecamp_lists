#include <stdio.h>
void	ft_swap(int	*a, int	*b);

int	main(void)
{
	int	num1;
	int	num2;
	int	*a;
	int	*b;

	num1 = 21;
	num2 = 42;
	a = &num1;
	b = &num2;
	printf("Before: num1 = %d - num2 = %d\n", num1, num2);
	ft_swap(a, b);
	printf("After: num1 = %d - num2 = %d\n", num1, num2);
	return (0);
}
