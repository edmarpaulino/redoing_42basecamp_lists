#include <stdio.h>
char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);

int	main(void)
{
	char	src[12] = "Hello world";
	char	dest[12];

	ft_strncpy(dest, src, 6);
	printf("src = %s\ndest = %s\n", src, dest);
	return (0);
}
