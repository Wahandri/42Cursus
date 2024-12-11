/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:54:19 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/10 20:56:33 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, int dstsize)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (dstsize <= i)
		j += dstsize;
	else
		j += i;
	while (src[k] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int main(void)
{
    char src[] = " world";
    char dst[20] = "Hello";
    int dstsize = 20;

    int result = ft_strlcat(dst, src, dstsize);

    printf("Destino tras concatenar: '%s'\n", dst);
    printf("Longitud total: %d\n", result);

    return 0;
}
*/
