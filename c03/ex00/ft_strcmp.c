int	ft_strcmp(char	*s1, char	*s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx])
		idx++;
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
