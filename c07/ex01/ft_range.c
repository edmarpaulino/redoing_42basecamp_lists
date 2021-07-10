#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*range;
	int	index;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(*range));
	if (range == 0)
		return (0);
	index = 0;
	while ((min + index) < max)
	{
		range[index] = (min + index);
		++index;
	}
	return (range);
}
