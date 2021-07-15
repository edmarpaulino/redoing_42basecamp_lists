#include "ft.h"

int	ft_strcmp(char	*s1, char	*s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		++index;
	return ((unsigned int)s1[index] - (unsigned int)s2[index]);
}
