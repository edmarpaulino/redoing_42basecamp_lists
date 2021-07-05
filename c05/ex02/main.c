#include <stdio.h>

int	ft_iterative_power(int	nb, int	power);

int	main(void)
{
	printf("-100^2 = %d\n", ft_iterative_power(-100, 2));
	printf("-10^2 = %d\n", ft_iterative_power(-10, 2));
	printf("-1^2 = %d\n", ft_iterative_power(-1, 2));
	printf("0^0 = %d\n", ft_iterative_power(0, 0));
	printf("1^1 = %d\n", ft_iterative_power(1, 1));
	printf("2^2 = %d\n", ft_iterative_power(2, 2));
	printf("3^3 = %d\n", ft_iterative_power(3, 3));
	printf("4^4 = %d\n", ft_iterative_power(4, 4));
	printf("5^5 = %d\n", ft_iterative_power(5, 5));
	printf("6^6 = %d\n", ft_iterative_power(6, 6));
	printf("7^7 = %d\n", ft_iterative_power(7, 7));
	printf("8^8 = %d\n", ft_iterative_power(8, 8));
	printf("9^0 = %d\n", ft_iterative_power(9, 0));
	printf("10^10 = %d\n", ft_iterative_power(10, 10));
	return (0);
}
