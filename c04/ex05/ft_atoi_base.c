int	ft_chk_whitespace(char	c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_getbase_len(char	*base)
{
	int	cur_idx;
	int	prev_idx;

	cur_idx = 0;
	while (base[cur_idx])
	{
		prev_idx = 0;
		while (prev_idx < cur_idx)
		{
			if (base[prev_idx] == base[cur_idx] \
				|| base[cur_idx] == '+' \
				|| base[cur_idx] == '-' \
				|| ft_chk_whitespace(base[cur_idx]))
				return (0);
			++prev_idx;
		}
		++cur_idx;
	}
	return (cur_idx);
}

int	ft_chk_char(char	c, char	*base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (c == base[idx])
			return (idx);
		++idx;
	}
	return (-1);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int		idx;
	int		nbr;
	char	sign;
	int		base_len;

	base_len = ft_getbase_len(base);
	if (base_len < 2 || str[0] == '\0')
		return (0);
	idx = 0;
	while (ft_chk_whitespace(str[idx]))
		++idx;
	sign = 1;
	while (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign *= -1;
		++idx;
	}
	nbr = 0;
	while (str[idx] && ft_chk_char(str[idx], base) != -1)
	{
		nbr = (nbr * base_len) + ft_chk_char(str[idx], base);
		++idx;
	}
	return (nbr * sign);
}
