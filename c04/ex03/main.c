#include <stdio.h>

int	ft_atoi(char	*str);

int	main(void)
{
	char	str1[] = "\t  ---+--+1234ab567";
	char	str2[] = "\t  --+--+1234ab567";
	char	str3[] = "\0 ---+--+1234ab567";
	char	str4[] = "---+--+abc";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	return (0);
}
