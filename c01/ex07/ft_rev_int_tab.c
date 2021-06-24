void	ft_rev_int_tab(int	*tab, int	size)
{
	int	idx;
	int	swap;

	idx = 0;
	while (idx < (size / 2))
	{
		swap = tab[idx];
		tab[idx] = tab[(size - 1) - idx];
		tab[(size - 1) - idx] = swap;
		idx++;
	}
}
