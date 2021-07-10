#include <stdlib.h>

unsigned int	ft_strlen(char	*str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	unsigned int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char	*src)
{
	unsigned int	size;
	char			*dest;

	if (src == 0)
		return (0);
	size = (ft_strlen(src) + 1);
	dest = malloc(size * sizeof(*dest));
	if (dest == 0)
		return (0);
	return (ft_strcpy(dest, src));
}
