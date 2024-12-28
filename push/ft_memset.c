/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:44:15 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/22 17:42:26 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		s1[i] = (char) c;
		i++;
	}
	s = s1;
	return ((char *)s);
}

/* int	main(void)
{
	char	s[12] = "Hello World";
	ft_memset(s, 'H', 5);
	printf ("%s\n", s);

	char	s1[12] = "Hello World";
	memset(s, 'H', 5);
	printf ("%s\n", s);
	return (0);
} */
