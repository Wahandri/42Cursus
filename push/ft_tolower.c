/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:05:21 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/06 00:05:23 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	char a, b, c;
	
	a = 'a';
	b = 'B';
	c = 5;
	printf("a es %c\n", ft_tolower(a));
	printf("B es %c\n", ft_tolower(b));
	printf("5 es %c\n", ft_tolower(c));
	return 0;
}
*/
