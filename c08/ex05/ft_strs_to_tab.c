#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

char	*ft_strdup(char	*src, int	src_len)
{
	char	*dup;
	int		index;

	dup = malloc((src_len + 1) * sizeof(*dup));
	if (dup != 0)
	{
		index = 0;
		while (src[index] != '\0')
		{
			dup[index] = src[index];
			++index;
		}
		dup[index] = '\0';
	}
	return (dup);
}

void	set_stock_str(t_stock_str	*stock_str, char	*str)
{
	if (str == 0)
	{
		stock_str->size = 0;
		stock_str->str = 0;
		stock_str->copy = 0;
	}
	else
	{
		stock_str->size = ft_strlen(str);
		stock_str->str = str;
		stock_str->copy = ft_strdup(stock_str->str, stock_str->size);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	t_stock_str	*stock_str_array;
	int			index;

	if (ac < 0 || av == 0)
		return (0);
	stock_str_array = malloc((ac + 1) * sizeof(*stock_str_array));
	if (stock_str_array != 0)
	{
		index = 0;
		while (index < ac)
		{
			set_stock_str(stock_str_array + index, av[index]);
			++index;
		}
		set_stock_str(stock_str_array + index, 0);
	}
	return (stock_str_array);
}
