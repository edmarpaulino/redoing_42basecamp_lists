#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

void	ft_init_vector(char	*str, int	size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		str[index] = 0;
		++index;
	}
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	index;
	int	len;

	len = 0;
	while (dest[len])
		++len;
	index = 0;
	while (src[index])
	{
		dest[len + index] = src[index];
		++index;
	}
	dest[len + index] = '\0';
	return (dest);
}

char	*ft_strjoin(int	size, char	**strs, char *sep)
{
	int		index;
	int		full_size;
	char	*str;

	index = 0;
	full_size = (size - 1);
	while (index < size)
	{
		full_size += ft_strlen(strs[index]);
		++index;
	}
	str = malloc((full_size + 1) * sizeof(*str));
	if (str == 0)
		return (0);
	index = 0;
	ft_init_vector(str, (full_size + 1));
	while (index < size)
	{
		ft_strcat(str, strs[index]);
		++index;
		if (index < size)
			ft_strcat(str, sep);
	}
	return (str);
}
