#include <stdio.h>
#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main(void)
{
	char	str1[] = "Hello warld!";
	char	str2[] = "Hello world!";
	char	str3[] = "Hello world!";
	char	str4[] = "Hello world!";
	char	str5[] = "Hello wãrld!";
	char	str6[] = "Hello world!";

	printf("str1 -> %s\n", str1);
	printf("str2 -> %s\n", str2);
	printf("original function return = %d\n", strncmp(str1, str2, 7));
	printf("your function return = %d\n\n", ft_strncmp(str1, str2, 7));
	
	printf("str3 -> %s\n", str3);
	printf("str4 -> %s\n", str4);
	printf("original function return = %d\n", strncmp(str3, str4, 100));
	printf("your function return = %d\n\n", ft_strncmp(str3, str4, 100));

	printf("str5 -> %s\n", str5);
	printf("str6 -> %s\n", str6);
	printf("original function return = %d\n", strncmp(str5, str6, 8));
	printf("your function return = %d\n", ft_strncmp(str5, str6, 8));
	return (0);
}
