#include <unistd.h>

void	ft_putnbr(int	nb)
{
	char	num[10];
	int		idx;

	if (nb == 0)
		write(1, "0", 1);
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	idx = 0;
	while (nb != 0 && nb != -2147483648)
	{
		num[idx] = ((nb % 10) + '0');
		idx++;
		nb /= 10;
	}
	while (--idx >= 0)
		write(1, &num[idx], 1);
}
