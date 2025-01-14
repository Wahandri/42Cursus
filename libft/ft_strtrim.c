/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:40:38 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/28 12:56:44 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		l = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[l - 1] && ft_strchr(set, s1[l - 1]) && l > i)
			l--;
		str = (char *)malloc(sizeof(char) * (l - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], l - i + 1);
	}
	return (str);
}
/* int	main(void)
{
	char	*s1 = "   Hello World!   ";
	char	*res;

	res = ft_strtrim(s1, " ");
	printf("\"%s\" con set \" \" -> \"%s\"\n", s1, res);
	free(res);

	return (0);
} */