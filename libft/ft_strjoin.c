/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:13:38 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/28 12:34:59 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l1;
	int		l2;
	char	*str;

	if (s1 && s2)
	{
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[l1] = s2[i];
			l1++;
		}
		str[l1] = '\0';
		return (str);
	}
	return (NULL);
}
/* int main(void)
{
	char	*str1 = "Hello ";
	char	*str2 = "World!";
	char	*res;

	res = ft_strjoin(str1, str2);
	printf("\"%s\" + \"%s\" -> \"%s\"\n", str1, str2, res);
	free(res);
	res = ft_strjoin("", str2);
	printf("\"\" + \"%s\" -> \"%s\"\n", str2, res);
	free(res);

	res = ft_strjoin("", "");
	printf("\"\" + \"\" -> \"%s\"\n", res);
	free(res);

	return (0);
} */
