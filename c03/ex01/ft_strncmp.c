int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx] && idx < n)
		idx++;
	if (idx == n)
		return (0);
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
