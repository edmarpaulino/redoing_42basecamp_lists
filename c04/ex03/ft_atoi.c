int	ft_atoi(char	*str)
{
	int	idx;
	int	signal;
	int	num;

	idx = 0;
	signal = 1;
	num = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	while (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			signal *= -1;
		idx++;
	}
	while (str[idx] >= '0' && str[idx] <= '9')
	{
		num = (num * 10) + (str[idx] - '0');
		idx++;
	}
	return (num * signal);
}
