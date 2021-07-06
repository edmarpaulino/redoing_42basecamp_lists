#include <unistd.h>

void	ft_putstr(char	*str)
{
	unsigned int	idx;

	idx = 0;
	while (str[idx])
	{
		write(1, &str[idx], 1);
		++idx;
	}
}

int	main(int	argc, char	*argv[])
{
	int	idx;

	idx = argc - 1;
	while (idx > 0)
	{
		ft_putstr(argv[idx]);
		write(1, "\n", 1);
		--idx;
	}
	return (0);
}
