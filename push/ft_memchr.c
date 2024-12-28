/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:31:58 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/16 18:38:57 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "Hello, this is a memchr test example!";
	char	*result;
	char	search = 'e';

	result = (char *)ft_memchr(str, search, strlen(str));
	if (result != NULL)
		printf("Found '%c' at position: %ld\n", search, result - str);
	else
		printf("Character '%c' not found.\n", search);
	search = 'z';
	result = (char *)ft_memchr(str, search, strlen(str));
	if (result != NULL)
		printf("Found '%c' at position: %ld\n", search, result - str);
	else
		printf("Character '%c' not found.\n", search);

	return (0);
} */