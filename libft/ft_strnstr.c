/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:37:47 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/16 16:17:33 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ib;
	size_t	il;

	ib = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[ib] && ib < len)
	{
		il = 0;
		while (big[ib + il] == little[il] && (ib + il) < len && big[ib + il])
			il++;
		if (little[il] == '\0')
			return ((char *)big + ib);
		ib++;
	}
	return (0);
}

/* int	main(void)
{
	char	big[50] = "Hello Wold World";
	printf ("%s\n", ft_strnstr(big, "Wor", 5));    // No debería encontrar "Wor"
	printf ("%s\n", ft_strnstr(big, "", 20));     // "Hello Wold World"
	printf ("%s\n", ft_strnstr(big, "World", 12)); // Debería encontrar "World"
	printf ("%s\n", ft_strnstr(big, "Wol", 10));   // Debería retornar NULL

	return (0);
} */