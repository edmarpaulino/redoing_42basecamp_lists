#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find);

int	main(void)
{
	char	str1[] = "To be, or not to be, that is the question";
	char	to_find1[] = "that";
	char	str2[] = "To be, or not to be, that is the question";
	char	to_find2[] = "thot";

	printf("original function return str1: %s\n", strstr(str1, to_find1));
	printf("your function return str1: %s\n\n", strstr(str1, to_find1));
	printf("original function return str2: %s\n", strstr(str2, to_find2));
	printf("your function return str2: %s\n\n", strstr(str2, to_find2));
	return (0);
}
