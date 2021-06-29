#include <stdio.h>
unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size);

int	main(void)
{
	char	src[13] = "Hello world!";
	char	dest[13];
	int		ret;

	ret = ft_strlcpy(dest, src, 0);
	printf("dest size: 0\n");
	printf("src: %s\ndest: %s\nreturn: %d\n\n", src, dest, ret);
	ret = ft_strlcpy(dest, src, 2);
	printf("dest size: 2\n");
	printf("src: %s\ndest: %s\nreturn: %d\n\n", src, dest, ret);
	ret = ft_strlcpy(dest, src, 5);
	printf("dest size: 5\n");
	printf("src: %s\ndest: %s\nreturn: %d\n\n", src, dest, ret);
	ret = ft_strlcpy(dest, src, 15);
	printf("dest size: 15\n");
	printf("src: %s\ndest: %s\nreturn: %d\n\n", src, dest, ret);
	return (0);
}
