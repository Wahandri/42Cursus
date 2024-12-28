/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:08:25 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/22 17:44:37 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int	main(void)
{
	char	s[12] = "Hello World";
	ft_bzero(s, 5);
	printf ("%s\n", s);

	char	s1[12] = "Hello World";
	bzero(s, 5);
	printf ("%s\n", s);
	return (0);
} */
