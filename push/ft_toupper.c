/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:05:29 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/06 00:05:37 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
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
	printf("a es %c\n", ft_toupper(a));
	printf("B es %c\n", ft_toupper(b));
	printf("5 es %c\n", ft_toupper(c));
	return 0;
}
*/
