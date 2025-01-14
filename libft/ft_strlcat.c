/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:50:05 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/20 18:45:58 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	i = 0;
	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	if (dstsize <= dl || !src)
		return (sl + dstsize);
	while (src[i] != '\0' && (dl + i) < (dstsize - 1))
	{
		dst[dl + i] = src[i];
		i++;
	}
	if ((dl + i) < dstsize)
		dst[dl + i] = '\0';
	return (sl + dl);
}

/*int	main(void)
{
	char	dst[50] = "Hello ";
	const char	src[] = "World";

	printf("%zu\n", ft_strlcat(dst, src, 2)); 
	return (0);
}*/