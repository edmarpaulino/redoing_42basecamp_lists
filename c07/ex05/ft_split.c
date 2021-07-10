#include <stdlib.h>

int	ft_is_charset(char	c, char	*charset)
{
	int	index;

	index = 0;
	while (charset[index] != '\0')
	{
		if (c == charset[index])
			return (1);
		++index;
	}
	return (0);
}

int	ft_split_counter(char	*str, char	*charset)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (str[index] != '\0')
	{
		if (str[index + 1] != '\0')
		{
			if (!ft_is_charset(str[index], charset) \
				&& ft_is_charset(str[index + 1], charset))
				++counter;
		}
		++index;
	}
	if (str[index] == '\0' && !ft_is_charset(str[index - 1], charset))
		++counter;
	return (counter);
}

char	**ft_split(char	*str, char	*charset)
{
	char	**split_pointer;
	int		split_amount;

	split_amount = ft_split_counter(str, charset);
	split_pointer = malloc((split_amount + 1) * sizeof(*split_pointer));
	if (split_pointer == 0)
		return (0);
	return (split_pointer);
}

/*	TO DO
*	
*	ft_split_allocation ->	function that will allocate the split strings
*
*	ft_split_copy ->		function that will copy the split strings to the
*							allocate spaces;
*/