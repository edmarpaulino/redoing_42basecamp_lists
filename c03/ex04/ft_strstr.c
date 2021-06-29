char	*ft_strstr(char	*str, char	*to_find)
{
	unsigned int	idx_str;
	unsigned int	idx_to_find;

	idx_str = 0;
	while (str[idx_str])
	{
		while (str[idx_str + idx_to_find] == to_find[idx_to_find] \
				&& to_find[idx_to_find])
		{
			idx_to_find++;
			if (to_find[idx_to_find] == '\0')
				return (&str[idx_str]);
		}
		idx_str++;
	}
	return (0);
}
