void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
	char	src[] = "Hola mundo";
	char	dst[20];

	printf("Origen: %s\n", src);
	printf("Destino: %s\n", dst);

	ft_memcpy(dst, src, 7);

	printf("Después de ft_memcpy:\n");
	printf("Origen: %s\n", src);
	printf("Destino: %s\n", dst);

	return 0;
}
*/
