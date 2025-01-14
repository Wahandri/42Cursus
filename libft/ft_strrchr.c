/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:20:51 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/22 18:22:30 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = c;
	i = ft_strlen(s);
	if (cc == 0)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/* int	main(void)
{
	char	s[12] = "Hello World";

	printf ("%s\n", ft_strrchr(s, 'o'));
	return (0);
} */