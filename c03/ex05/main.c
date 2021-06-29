#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size);

int	main(void)
{
	char	src1[] = "world";
	char	dest1[] = "Hello";
	char	src2[] = "world";
	char	dest2[] = "Hello";
	char	src3[] = "world";
	char	dest3[] = "Hello";
	char	src4[] = "world";
	char	dest4[] = "Hello";

	printf("expected result: 10\n");
	printf("original function return: %ld\n", strlcat(dest1, src1, 11));
	printf("your function return: %d\n\n", ft_strlcat(dest2, src2, 11));
	printf("expected result: 6\n");
	printf("original function return: %ld\n", strlcat(dest3, src3, 1));
	printf("your function return: %d\n\n", ft_strlcat(dest4, src4, 1));
	return (0);
}
