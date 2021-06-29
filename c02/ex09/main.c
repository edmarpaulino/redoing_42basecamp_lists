#include <stdio.h>
char	*ft_strcapitalize(char	*str);

int	main(void)
{
	char	str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char	str2[] = "A\tsIMPLe stRInG\t42to!try?THE-/-proGRAM";
	char	str3[] = "w!o?r/d s1a2l3a4d";
	char	str4[] = "\t\the11o_w0r!d!";
	char	str5[] = "w1o2r3d4 s!a/l#a?d-2";

	printf("str1 before: \n%s\n", str1);
	printf("str1 after: \n%s\n\n", ft_strcapitalize(str1));
	printf("str2 before: \n%s\n", str2);
	printf("str2 after: \n%s\n\n", ft_strcapitalize(str2));
	printf("str3 before: \n%s\n", str3);
	printf("str3 after: \n%s\n\n", ft_strcapitalize(str3));
	printf("str4 before: \n%s\n", str4);
	printf("str4 after: \n%s\n\n", ft_strcapitalize(str4));
	printf("str5 before: \n%s\n", str5);
	printf("str5 after: \n%s\n\n", ft_strcapitalize(str5));
	return (0);
}
