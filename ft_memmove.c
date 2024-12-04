void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
