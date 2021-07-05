int	ft_find_next_prime(int	nb)
{
	int	div;

	if (nb < 2)
		nb = 2;
	div = 2;
	while (div <= (nb / div))
	{
		if (nb % div == 0)
		{
			div = 1;
			++nb;
		}
		++div;
	}
	return (nb);
}
