/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:40:53 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/28 12:11:34 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * (len +1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* int	main(void)
{
    char *s = "Hello, World!";
    char *res;

    res = ft_substr(s, 0, 4);
    printf("\"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr(s, 7, 5);
    printf("\"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr(s, 7, 20);
    printf("\"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr(s, 50, 10);
    printf("Caso 4: \"%s\" -> \"%s\"\n", s, res);
    free(res);

    res = ft_substr("", 0, 5);
    printf("Caso 5: \"%s\" -> \"%s\"\n", "", res);
    free(res);

    return 0;
} */
