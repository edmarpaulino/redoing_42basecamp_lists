#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int	nb);

int	main(void)
{
	printf("max negative int root = %d\n", ft_sqrt(INT_MIN));
	printf("-1111088889 root = %d\n", ft_sqrt(-1111088889));
	printf("-998001 root = %d\n", ft_sqrt(-998001));
	printf("-64 root = %d\n", ft_sqrt(-64));
	printf("-42 root = %d\n", ft_sqrt(-42));
	printf("0 root = %d\n", ft_sqrt(0));
	printf("42 root = %d\n", ft_sqrt(42));
	printf("64 root = %d\n", ft_sqrt(64));
	printf("998001 root = %d\n", ft_sqrt(998001));
	printf("1111088889 root = %d\n", ft_sqrt(1111088889));
	printf("max positive int root = %d\n", ft_sqrt(INT_MAX));
	return (0);
}
