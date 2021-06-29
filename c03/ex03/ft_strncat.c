char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	len;
	unsigned int	idx;

	len = 0;
	while (dest[len])
		len++;
	idx = 0;
	while (src[idx] && idx < nb)
	{
		dest[len + idx] = src[idx];
		idx++;
	}
	dest[len + idx] = '\0';
	return (dest);
}
