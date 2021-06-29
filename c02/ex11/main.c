#include <stdio.h>
void	ft_putstr_non_printable(char	*str);

int	main(void)
{
	char	str1[] = "Oi\nvoce esta bem?";
	char	str2[] = "Oi\tvoce esta bem?";
	char	str3[] = "Oi\vvoce esta bem?";

	printf("str1 before: \n%s\n", str1);
	printf("str2 before: \n%s\n", str2);
	printf("str3 before: \n%s\n\n", str3);
	printf("They after:\n");
	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
	printf("\n");
	ft_putstr_non_printable(str3);
	printf("\n");
	return (0);
}
