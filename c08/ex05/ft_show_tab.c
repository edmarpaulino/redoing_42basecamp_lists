#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}

void	ft_putnbr(int	nbr)
{
	unsigned int	nbr_unsigned;
	char			digit;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr_unsigned = nbr * -1;
	}
	else
		nbr_unsigned = nbr;
	if (nbr_unsigned > 9)
		ft_putnbr(nbr_unsigned / 10);
	digit = ('0' + (nbr_unsigned % 10));
	write(1, &digit, 1);
}

void	ft_show_tab(struct	s_stock_str	*par)
{
	int	index;

	if (par != 0)
	{
		index = 0;
		while ((par + index)->str != 0)
		{
			ft_putstr((par + index)->str);
			write(1, "\n", 1);
			ft_putnbr((par + index)->size);
			write(1, "\n", 1);
			ft_putstr((par + index)->copy);
			write(1, "\n", 1);
			++index;
		}
	}
}
