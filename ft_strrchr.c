char	*ft_strrchr(char *s, int c)
{
	int	i;
	char	*last;

	last = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last = (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (last);
}
