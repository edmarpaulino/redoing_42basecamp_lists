#include <stdio.h>
void	ft_sort_int_tab(int	*tab, int	size);

int	main(void)
{
	int	tab[9] = {71, 43, 99, 52, 83, 11, 33, 10, 42};
	int	idx;

	idx = 0;
	while (idx < 9)
	{
		printf("%d ", tab[idx]);
		idx++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 9);
	idx = 0;
	while (idx < 9)
	{
		printf("%d ", tab[idx]);
		idx++;
	}
	printf("\n");
	return (0);
}
