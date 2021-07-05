#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int	nb);

int	main(void)
{
	printf("INT_MIN next prime = %d\n", ft_find_next_prime(INT_MIN));
	printf("-1 next prime = %d\n", ft_find_next_prime(-1));
	printf("0 next prime = %d\n", ft_find_next_prime(0));
	printf("1 next prime = %d\n", ft_find_next_prime(1));
	printf("15 next prime = %d\n", ft_find_next_prime(15));
	printf("8999 next prime = %d\n", ft_find_next_prime(8999));
	printf("INT_MAX next prime = %d\n", ft_find_next_prime(INT_MAX));
	return (0);
}
