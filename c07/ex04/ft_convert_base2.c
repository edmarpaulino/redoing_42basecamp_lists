#include <stdlib.h>

int	ft_get_number_len(int	nbr, int	base_len)
{
	int	nbr_len;

	if (nbr < 1)
		nbr_len = 1;
	else
		nbr_len = 0;
	while (nbr != 0)
	{
		++nbr_len;
		nbr /= base_len;
	}
	return (nbr_len);
}

void	ft_get_signal(int	nbr, unsigned int	*nbr_unsigned, char	*sign)
{
	if (nbr < 0)
	{
		*nbr_unsigned = (nbr * -1);
		*sign = 1;
	}
	else
	{
		*nbr_unsigned = nbr;
		*sign = 0;
	}
}

char	*ft_itoa_base(int	nbr, char	*base, int	base_len)
{
	int				nbr_len;
	char			*nbr_string;
	char			sign;
	unsigned int	nbr_unsigned;

	nbr_len = ft_get_number_len(nbr, base_len);
	ft_get_signal(nbr, &nbr_unsigned, &sign);
	nbr_string = malloc((nbr_len + 1 + sign) * sizeof(*nbr_string));
	if (nbr_string == 0)
		return (0);
	nbr_string[nbr_len] = '\0';
	--nbr_len;
	while (nbr_len >= sign)
	{
		nbr_string[nbr_len] = base[nbr_unsigned % base_len];
		nbr_unsigned /= base_len;
		--nbr_len;
	}
	if (sign == 1)
		nbr_string[nbr_len] = '-';
	return (nbr_string);
}
