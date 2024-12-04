#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[20] = "42 Málaga es genial";

	printf("Antes de memset: %s\n", str);
	ft_memset(str + 3, '-', 5);
	printf("Después de memset: %s\n", str);

	return 0;
}
*/
