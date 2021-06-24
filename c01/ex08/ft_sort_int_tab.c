void	ft_sort_int_tab(int	*tab, int	size)
{
	int	swap;
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (tab[idx] > tab[idx + 1] && (idx + 1) < size)
		{
			swap = tab[idx];
			tab[idx] = tab[idx + 1];
			tab[idx + 1] = swap;
			if (idx > 0)
				idx--;
		}
		else
			idx++;
	}
}
