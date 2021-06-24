#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				ft_putchar(number[0]);
				ft_putchar(number[1]);
				ft_putchar(number[2]);
				if (number[0] < '7')
					write(1, ", ", 2);
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
