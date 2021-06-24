void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	swap;

	if (*a != 0 && *b != 0)
	{
		swap = *a % *b;
		*a /= *b;
		*b = swap;
	}
}
