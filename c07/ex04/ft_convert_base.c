char	*ft_itoa_base(int	nbr, char	*base, int	base_len);

int	ft_is_whitespace(char	c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_get_base_len(char	*base)
{
	int	current_index;
	int	previous_index;

	current_index = 0;
	while (base[current_index])
	{
		if (ft_is_whitespace(base[current_index]) \
			|| base[current_index] == '+' \
			|| base[current_index] == '-')
			return (0);
		previous_index = 0;
		while (previous_index < current_index)
		{
			if (base[previous_index] == base[current_index])
				return (0);
			++previous_index;
		}
		++current_index;
	}
	return (current_index);
}

int	ft_get_index(char	c, char	*base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		++index;
	}
	return (-1);
}

int	ft_atoi_base(char	*nbr, char	*base, int	base_len)
{
	int		index;
	char	sign;
	int		base_idx;
	int		integer_number;

	index = 0;
	while (ft_is_whitespace(nbr[index]))
		++index;
	sign = 1;
	while (nbr[index] == '+' || nbr[index] == '-')
	{
		if (nbr[index] == '-')
			sign *= -1;
		++index;
	}
	integer_number = 0;
	base_idx = ft_get_index(nbr[index], base);
	while (base_idx != -1)
	{
		integer_number = (integer_number * base_len) + base_idx;
		++index;
		base_idx = ft_get_index(nbr[index], base);
	}
	return (integer_number * sign);
}

char	*ft_convert_base(char	*nbr, char	*base_from, char	*base_to)
{
	int	base_from_len;
	int	base_to_len;
	int	integer_number;

	base_from_len = ft_get_base_len(base_from);
	base_to_len = ft_get_base_len(base_to);
	if (base_from_len < 2 || base_to_len < 2)
		return (0);
	integer_number = ft_atoi_base(nbr, base_from, base_from_len);
	return (ft_itoa_base(integer_number, base_to, base_to_len));
}
