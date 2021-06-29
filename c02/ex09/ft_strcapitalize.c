int	ft_char_is_alphanum(char	c)
{
	if ((c >= '0' && c <= '9') \
		|| (c >= 'A' && c <= 'Z') \
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		else if (idx > 0 \
				&& !ft_char_is_alphanum(str[idx - 1]) \
				&& str[idx] >= 'a' \
				&& str[idx] <= 'z')
			str[idx] -= 32;
		else if (idx > 0 \
				&& ft_char_is_alphanum(str[idx - 1]) \
				&& str[idx] >= 'A' \
				&& str[idx] <= 'Z')
			str[idx] += 32;
		idx++;
	}
	return (str);
}
