#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*src[] = {"Hello", "world", "my", "42", "friends"};
	char	*dest;
	int		size;
	int		index;

	size = 5;
	index = 0;
	while (index <= size)
	{
		dest = ft_strjoin(index, src, " ");
		printf("size = %d\t%s\n", index, dest);
		++index;
		free(dest);
	}
	return (0);
}
