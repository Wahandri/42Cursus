/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:32:07 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/17 20:37:01 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	slen;

	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (dstsize == 0)
		return (slen);
	l = 0;
	while (src[l] != '\0' && l < dstsize - 1)
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (slen);
}

/* int	main(void)
{
	char	dst[50] = "test";
	
	printf("%zu\n", ft_strlcpy(dst, "Hello World", 8));
	return (0);
} */