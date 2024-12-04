int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	unsigned int		i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "Hola mundo";
    char str2[] = "Hola mundo";
    char str3[] = "Hola Wold";

    // Caso 1: Bloques iguales
    int result = ft_memcmp(str1, str2, 9);
    printf("Comparando '%s' y '%s': %d\n", str1, str2, result);

    // Caso 2: Bloques diferentes
    result = ft_memcmp(str1, str3, 9);
    printf("Comparando '%s' y '%s': %d\n", str1, str3, result);

    // Caso 3: Comparar parcialmente
    result = ft_memcmp(str1, str3, 8); // Solo los primeros 8 bytes
    printf("Comparando parcialmente '%s' y '%s': %d\n", str1, str3, result);

    return 0;
}
*/
