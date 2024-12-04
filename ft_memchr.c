void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char	*ptr;
	int		i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i));
		}
	}
	return (0);
}
