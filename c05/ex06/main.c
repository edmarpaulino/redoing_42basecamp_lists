#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int	nb);

int	main(void)
{
	printf("INT_MIN is prime - %d\n", ft_is_prime(INT_MIN));
	printf("-1 is prime - %d\n", ft_is_prime(-1));
	printf("0 is prime - %d\n", ft_is_prime(0));
	printf("1 is prime - %d\n", ft_is_prime(1));
	printf("2 is prime - %d\n", ft_is_prime(2));
	printf("15 is prime - %d\n", ft_is_prime(15));
	printf("17 is prime - %d\n", ft_is_prime(17));
	printf("18 is prime - %d\n", ft_is_prime(18));
	printf("24 is prime - %d\n", ft_is_prime(24));
	printf("64 is prime - %d\n", ft_is_prime(64));
	printf("99 is prime - %d\n", ft_is_prime(99));
	printf("8999 is prime - %d\n", ft_is_prime(8999));
	printf("INT_MAX is prime - %d\n", ft_is_prime(INT_MAX));
	return (0);
}
