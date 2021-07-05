int	ft_iterative_factorial(int	nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	fat = nb;
	while (--nb > 0)
	{
		fat *= nb;
	}
	return (fat);
}
