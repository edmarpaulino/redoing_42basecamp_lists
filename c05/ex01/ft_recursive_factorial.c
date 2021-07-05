int	ft_recursive_factorial(int	nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	fat = nb;
	return (fat * ft_recursive_factorial(nb - 1));
}
