/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:59:05 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/10 20:50:59 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha( int arg)
{
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int main ()
{
	int a, b, c, d;

	a = 'a';
	b = 'B';
	c = '2';

	printf("a=%i, b=%i, c=%i, d=%i", isalpha(a), isalpha(b), isalpha(c));

	return 0;
}
*/
