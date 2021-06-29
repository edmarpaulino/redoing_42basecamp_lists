#include <stdio.h>
char	*ft_strupcase(char	*str);

int	main(void)
{
	char	str1[] = "Hello world!";
	char	str2[] = "HELLO WORLD!";
	char	str3[] = "01234 56789!";
	char	str4[] = "hello w0r1d!";
	char	str5[] = "#3!!0 world!";
	char	str6[] = "HELLO 56789!";
	char	str7[] = "01234 WORLD!";

	printf("str1 before: %s\n", str1);
	printf("str1 after: %s\n\n", ft_strupcase(str1));
	printf("str2 before: %s\n", str2);
	printf("str2 after: %s\n\n", ft_strupcase(str2));
	printf("str3 before: %s\n", str3);
	printf("str3 after: %s\n\n", ft_strupcase(str3));
	printf("str4 before: %s\n", str4);
	printf("str4 after: %s\n\n", ft_strupcase(str4));
	printf("str5 before: %s\n", str5);
	printf("str5 after: %s\n\n", ft_strupcase(str5));
	printf("str6 before: %s\n", str6);
	printf("str6 after: %s\n\n", ft_strupcase(str6));
	printf("str7 before: %s\n", str7);
	printf("str7 after: %s\n\n", ft_strupcase(str7));
	return (0);
}
