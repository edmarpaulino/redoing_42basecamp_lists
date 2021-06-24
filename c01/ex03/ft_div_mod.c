void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	if (a != 0 && b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
