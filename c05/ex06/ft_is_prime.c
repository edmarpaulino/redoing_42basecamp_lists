int	ft_is_prime(int	nb)
{
	int	div;

	if (nb < 2)
		return (0);
	div = 2;
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		++div;
	}
	return (1);
}
