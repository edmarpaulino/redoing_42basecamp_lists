#include <stdio.h>
void	ft_rev_int_tab(int	*tab, int	size);

int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	idx;

	idx = 0;
	while (idx < 10)
	{
		printf("%d", tab[idx]);
		idx++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	idx = 0;
	while (idx < 10)
	{
		printf("%d", tab[idx]);
		idx++;
	}
	printf("\n");
	return (0);
}
