#include <stdio.h>
int	ft_strlen(char	*str);

int	main(void)
{
	char	str[] = "Hello World";

	printf("Number of characters = %d\n", ft_strlen(str));
	return (0);
}
