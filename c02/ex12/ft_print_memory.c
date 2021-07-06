#include <unistd.h>

void	ft_putaddr_hex(size_t addr, char	*hex)
{
	int				idx;
	unsigned char	hex_addr[15];

	idx = 14;
	while (idx >= 0)
	{
		hex_addr[idx] = hex[addr % 16];
		addr /= 16;
		--idx;
	}
	write(1, hex_addr, 15);
	write(1, ": ", 2);
}

void	ft_putline_hex(unsigned char	*line, unsigned int size, char	*hex)
{
	unsigned int	idx;

	idx = 0;
	while (idx < size)
	{
		write(1, hex + (line[idx] / 16), 1);
		write(1, hex + (line[idx] % 16), 1);
		if (idx % 2)
			write(1, " ", 1);
		++idx;
	}
	while (idx < 16)
	{
		write (1, " ", 1);
		++idx;
	}
}

void	ft_putline_ascii(unsigned char	*line, unsigned int	size)
{
	unsigned int	idx;

	idx = 0;
	while (idx < size)
	{
		if (line[idx] >= 32 && line[idx] <= 126)
			write(1, &line[idx], 1);
		else
			write(1, ".", 1);
		++idx;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void	*addr, unsigned int	size)
{
	unsigned int	idx;
	unsigned int	line_size;
	char			*hex;

	idx = 0;
	hex = "0123456789abcdef";
	while (idx < size)
	{
		if ((idx + 16) < size)
			line_size = 16;
		else
			line_size = size - idx;
		ft_putaddr_hex(((size_t)addr + idx), hex);
		ft_putline_hex((addr + idx), line_size, hex);
		ft_putline_ascii((addr + idx), line_size);
		idx += line_size;
	}
	return (addr);
}
