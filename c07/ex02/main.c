#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;

	int min = -5;
	int max = -1;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	min = -5;
	max = 0;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	min = -5;
	max = 5;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	min = 0;
	max = 5;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	min = 5;
	max = 10;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	min = -5;
	max = -5;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	min = 5;
	max = 0;
	printf("----------------------------------------\n");
	printf("min = %d\nmax = %d\n\n", min, max);
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int index = 0; index < max - min; ++index)
			printf("%d ", range[index]);
		putchar('\n');
		free(range);
	}
	printf("----------------------------------------\n");

	return (0);
}
