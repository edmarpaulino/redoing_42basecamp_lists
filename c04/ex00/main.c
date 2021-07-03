#include <stdio.h>
#include <string.h>

int	ft_strlen(char	*str);

int	main(void)
{
	char	str1[12] = "Hello world";
	char	str2[13] = "42 Sao Paulo";
	char	str3[9] = "Basecamp";

	printf("expected result: 11\n");
	printf("original function return: %ld\n", strlen(str1));
	printf("your function return: %d\n\n", ft_strlen(str1));
	printf("expected result: 12\n");
	printf("original function return: %ld\n", strlen(str2));
	printf("your function return: %d\n\n", ft_strlen(str2));
	printf("expected result: 8\n");
	printf("original function return: %ld\n", strlen(str3));
	printf("your function return: %d\n\n", ft_strlen(str3));
	return (0);
}
