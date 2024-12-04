int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "42 Málaga";
    char str2[] = "42 Málaga es genial";

    int result = ft_strncmp(str1, str2, 13);

    if (result == 0)
        printf("Las cadenas son iguales en los primeros %d caracteres.\n", 9);
    else if (result < 0)
        printf("Es menor que la segunda en los primeros %d caracteres.\n", 9);
    else
        printf("Es mayor que la segunda en los primeros %d caracteres.\n", 9);

    return 0;
}
*/
