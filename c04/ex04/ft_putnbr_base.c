#include <unistd.h>

unsigned int	ft_getbase_len(char	*base)
{
	unsigned int	cur_idx;
	unsigned int	prev_idx;

	cur_idx = 0;
	while (base[cur_idx])
	{
		prev_idx = 0;
		while (prev_idx < cur_idx)
		{
			if (base[prev_idx] == base[cur_idx] \
				|| base[cur_idx] == '-' \
				|| base[cur_idx] == '+')
				return (0);
			++prev_idx;
		}
		++cur_idx;
	}
	return (cur_idx);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_put_conv(unsigned int	nbr, char	*base, unsigned int	*base_len)
{	
	if (nbr >= *base_len)
		ft_put_conv((nbr / *base_len), base, base_len);
	ft_putchar(base[nbr % *base_len]);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	unsigned int	unsign_nbr;
	unsigned int	base_len;

	base_len = ft_getbase_len(base);
	if (base_len < 2)
		return ;
	else if (nbr < 0)
	{
		unsign_nbr = (nbr * -1);
		ft_putchar('-');
	}
	else
		unsign_nbr = nbr;
	ft_put_conv(unsign_nbr, base, &base_len);
}
