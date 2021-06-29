unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	idx;

	idx = 0;
	if (size > 0)
	{
		while (idx < (size - 1) && src[idx])
		{
			dest[idx] = src[idx];
			idx++;
		}
	}
	while (src[idx])
		idx++;
	return (idx);
}
