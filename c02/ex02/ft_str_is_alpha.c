int	ft_str_is_alpha(char	*str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (!(str[idx] >= 'A' && str[idx] <= 'Z') \
			&& ! (str[idx] >= 'a' && str[idx] <= 'z'))
			return (0);
		idx++;
	}
	return (1);
}
