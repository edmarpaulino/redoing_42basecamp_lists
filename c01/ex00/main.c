#include <stdio.h>
void	ft_ft(int	*nbr);

int	main(void)
{
	int	num;
	int	*nbr;

	num = 21;
	nbr = &num;
	printf("Before = %d\n", num);
	ft_ft(nbr);
	printf("After = %d\n", num);
	return (0);
}
