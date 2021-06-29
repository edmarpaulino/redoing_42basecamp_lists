#include <unistd.h>
void	ft_puthex(char	c)
{
	char	hex[3];
	int		idx;

	idx = 0;
	while (c != 0)
	{
		if ((c % 16) < 10)
			hex[idx] = ((c % 16) + 48);
		else
			hex[idx] = ((c % 16) + 87);
		c /= 16;
		idx++;
	}
	if (idx == 1)
	{
		hex[idx] = '0';
		idx++;
	}
	hex[idx] = '\\';
	while (idx >= 0)
	{
		write(1, &hex[idx], 1);
		idx--;
	}
}

void	ft_putstr_non_printable(char	*str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] >= 32 && str[idx] <= 126)
			write(1, &str[idx], 1);
		else
			ft_puthex(str[idx]);
		idx++;
	}
}
