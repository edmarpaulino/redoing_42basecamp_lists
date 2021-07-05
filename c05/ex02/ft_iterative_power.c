int	ft_iterative_power(int	nb, int	power)
{
	int	ret;

	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (0);
	ret = nb;
	while (--power > 0)
		ret *= nb;
	return (ret);
}
