#include <stdio.h>
char	*ft_strcpy(char	*dest, char	*src);

int	main(void)
{
	char	src[12] = "Hello World";
	char	dest[12];

	ft_strcpy(dest, src);
	printf("src = %s\ndest = %s\n", src, dest);
	return (0);
}
