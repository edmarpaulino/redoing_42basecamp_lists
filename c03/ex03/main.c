#include <stdio.h>
#include <string.h>

char	*ft_strncat(char	*dest, char *src, unsigned int	nb);

int	main(void)
{
	char	src1[12] = "world";
	char	dest1[12] = "Hello";
	char	src2[12] = "world";
	char	dest2[12] = "Hello";

	printf("before:\nsrc1: %s\ndest1: %s\n", src1, dest1);	
	printf("before:\nsrc2: %s\ndest2: %s\n", src2, dest2);	
	printf("dest1 original function return: %s\n", strncat(dest1, src1, 3));
	printf("dest2 your function return: %s\n", ft_strncat(dest2, src2, 3));
	return (0);
}
