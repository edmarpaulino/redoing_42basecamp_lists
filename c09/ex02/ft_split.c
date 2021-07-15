#include <stdlib.h>

char	ft_is_charset(char	c, char	*charset)
{
	while (*charset != '\0')
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

int	ft_split_size(char	*str, char	*charset)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		if (!ft_is_charset(*str, charset) \
			&& (ft_is_charset(*(str + 1), charset) || *(str + 1) == '\0'))
			++size;
		++str;
	}
	return (size);
}

char	*ft_split_copy(char	*str, int	*str_index, char	*charset)
{
	int		len;
	char	*split_dest;
	int		split_dest_index;

	while (ft_is_charset(str[*str_index], charset))
		++*str_index;
	len = 0;
	while (!ft_is_charset(str[*str_index + len], charset))
		++len;
	split_dest = malloc((len + 1) * sizeof(*split_dest));
	if (split_dest != 0)
	{
		split_dest_index = 0;
		while (split_dest_index < len)
		{
			split_dest[split_dest_index] = str[*str_index];
			++split_dest_index;
			++*str_index;
		}
		split_dest[split_dest_index] = '\0';
		return (split_dest);
	}
	return (0);
}

char	**ft_split(char	*str, char	*charset)
{
	int		split_size;
	char	**split_ptr;
	int		split_ptr_index;
	int		str_index;

	split_size = ft_split_size(str, charset);
	split_ptr = malloc((split_size + 1) * sizeof(*split_ptr));
	if (split_ptr == 0)
		return (0);
	split_ptr_index = 0;
	str_index = 0;
	while (split_ptr_index < split_size)
	{
		split_ptr[split_ptr_index] = ft_split_copy(str, &str_index, charset);
		++split_ptr_index;
	}
	split_ptr[split_ptr_index] = 0;
	return (split_ptr);
}
