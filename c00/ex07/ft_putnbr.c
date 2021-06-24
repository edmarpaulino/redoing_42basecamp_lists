#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	char	number[10];
	int		index;

	index = 0;
	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
	}
	while (nb > 0)
	{
		number[index] = ((nb % 10) + '0');
		nb /= 10;
		index++;
	}
	while (--index >= 0)
		ft_putchar(number[index]);
}
