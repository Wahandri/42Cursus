/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:59:34 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/22 18:08:32 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ob;

	ob = (char *)malloc(ft_strlen(s) + 1);
	if (ob == NULL)
		return (NULL);
	ft_strlcpy(ob, s, ft_strlen(s) + 1);
	return (ob);
}

/* int	main(void)
{
	char	*str = "Hello World";
	char	*cpy;

	cpy = ft_strdup(str);
	printf("%s\n", cpy);
	free(cpy);
	return (0);
} */