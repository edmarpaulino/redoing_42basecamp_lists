#include <stdio.h>
int	ft_str_is_printable(char	*str);

int	main(void)
{
	char	str1[7] = "abcDEF";
	char	str2[7] = "123abc";
	char	str3[7] = "  !@ -";
	char	str4[7] = "\t\vnt\t\v";
	char	str5[7];

	printf("str1: %s -> result: %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s -> result: %d\n", str2, ft_str_is_printable(str2));
	printf("str3: %s -> result: %d\n", str3, ft_str_is_printable(str3));
	printf("str4: %s -> result: %d\n", str4, ft_str_is_printable(str4));
	printf("str5: %s -> result: %d\n", str5, ft_str_is_printable(str5));
	return (0);
}
