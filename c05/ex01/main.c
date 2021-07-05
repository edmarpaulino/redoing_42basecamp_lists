#include <stdio.h>

int	ft_recursive_factorial(int	nb);

int	main(void)
{
	printf("-100 = %d\n", ft_recursive_factorial(-100));
	printf("-10 = %d\n", ft_recursive_factorial(-10));
	printf("-2 = %d\n", ft_recursive_factorial(-2));
	printf("-1 = %d\n", ft_recursive_factorial(-1));
	printf("0 = %d\n", ft_recursive_factorial(0));
	printf("1 = %d\n", ft_recursive_factorial(1));
	printf("2 = %d\n", ft_recursive_factorial(2));
	printf("3 = %d\n", ft_recursive_factorial(3));
	printf("4 = %d\n", ft_recursive_factorial(4));
	printf("5 = %d\n", ft_recursive_factorial(5));
	printf("6 = %d\n", ft_recursive_factorial(6));
	printf("7 = %d\n", ft_recursive_factorial(7));
	printf("8 = %d\n", ft_recursive_factorial(8));
	printf("9 = %d\n", ft_recursive_factorial(9));
	printf("10 = %d\n", ft_recursive_factorial(10));
	return (0);
}
