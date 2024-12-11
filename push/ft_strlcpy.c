/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:04:49 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/06 00:04:51 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i != '\0'])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "42 Málaga es genial";
	char	dst[20];
	int	dstsize = 15;
	int	result = ft_strlcpy(dst, src, dstsize);

	printf("Fuente: '%s'\n", src);
	printf("Destino: '%s'\n", dst);
	printf("Longitud de la fuente: %d\n", result);

	return 0;
}
*/
