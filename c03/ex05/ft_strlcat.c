unsigned int	ft_strlen(char	*str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	idx;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	idx = 0;
	while (src[idx] && idx < (size - 1))
	{
		dest[dest_len + idx] = src[idx];
		idx++;
	}
	dest[dest_len + idx] = '\0';
	return (dest_len + src_len);
}
