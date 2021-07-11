#include <unistd.h>
#include "ft.h"

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_swap(int	*a, int	*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_putstr(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		++index;
	}
}

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		++index;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
