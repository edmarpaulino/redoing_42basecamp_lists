#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	number[2];

	number[0] = 0;
	while (number[0] <= 98)
	{
		number[1] = number[0] + 1;
		while (number[1] <= 99)
		{
			ft_putchar((number[0] / 10) + '0');
			ft_putchar((number[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((number[1] / 10) + '0');
			ft_putchar((number[1] % 10) + '0');
			if (number[0] + number[1] != 197)
				write(1, ", ", 2);
			number[1]++;
		}
		number[0]++;
	}
}
