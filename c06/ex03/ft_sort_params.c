#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx])
		++idx;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}

void	ft_ascii_sort(char	**argv, int	idx, int	end)
{
	char	*swap;

	while (idx < end)
	{
		if (ft_strcmp(argv[idx], argv[idx + 1]) > 0)
		{
			swap = argv[idx];
			argv[idx] = argv[idx + 1];
			argv[idx + 1] = swap;
			if (idx > 1)
				--idx;
		}
		else
			++idx;
	}
}

void	ft_putstr(char	*str)
{
	int	idx;

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

	idx = 1;
	ft_ascii_sort(argv, idx, (argc - 1));
	while (idx < argc)
	{
		ft_putstr(argv[idx]);
		write(1, "\n", 1);
		++idx;
	}
	return (0);
}
