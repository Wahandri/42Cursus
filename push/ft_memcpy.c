/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:14:11 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/16 13:32:36 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	s1[] = "Hello World";
	char	dest1[50];
	ft_memcpy(dest1, s1, 5);
	printf ("%s\n", dest1);

	char	s2[] = "Hello World";
	char	dest2[50];
	memcpy(dest2, s2, 5);
	printf ("%s\n", dest2);
	return (0);
} */
