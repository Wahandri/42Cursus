char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "42 Málaga";

    char *result = ft_strchr(str, 'M'); // Buscar 'M'
    if (result)
        printf("Encontrado: '%c'\n", *result);
    else
        printf("No encontrado: 'M'\n");

    result = ft_strchr(str, 'X'); // Buscar 'X'
    if (result)
        printf("Encontrado: '%c'\n", *result);
    else
        printf("No encontrado: 'X'\n");

    result = ft_strchr(str, '\0'); // Buscar '\0'
    if (result)
        printf("Encontrado el final de la cadena\n");

    return 0;
}
*/
