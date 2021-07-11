#include <stdio.h>
#include <string.h>
#include "ft.h"

int	main(void)
{
	char	c;
	int		a;
	int		b;
	char	*str;
	char	*s1;
	char	*s2;

	c = 'E';
	a = 42;
	b = 21;
	str = "Hello world";
	s1 = "abcdefz";
	s2 = "abcdefa";

	printf("Calling ft_putchar\n");
	printf("ft output -> \n");
	ft_putchar(c);
	ft_putchar('\n');
	printf("Expected output -> %c\n\n", c);

	printf("Calling ft_swap\n");
	printf("Before: a = %d and b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: a = %d and b = %d\n", a, b);
	printf("Expected output -> a = 21 and b = 42\n\n");

	printf("Calling ft_putstr\n");
	printf("ft output -> \n");
	ft_putstr(str);
	printf("\n");
	printf("Expected output -> %s\n\n", str);

	printf("Calling ft_strlen\n");
	printf("ft output -> %d\n", ft_strlen(str));
	printf("Expected output -> %lu\n\n", strlen(str));

	printf("Calling ft_strcmp\n");
	printf("ft output -> %d\n", ft_strcmp(s1, s2));
	printf("Expected output -> %d\n\n", strcmp(s1, s2));
	return (0);
}