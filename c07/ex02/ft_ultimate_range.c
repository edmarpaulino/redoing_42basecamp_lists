#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc((max - min) * sizeof(**range));
	if (*range == 0)
		return (-1);
	index = 0;
	while ((min + index) < max)
	{
		(*range)[index] = (min + index);
		++index;
	}
	return (index);
}
