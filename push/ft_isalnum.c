/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:00:57 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/06 00:01:09 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= '0') && (c <= '9')
		|| (c >= 'a') && (c <= 'z')
		|| (c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
    char a, b, c, d, e;

    a = '5';
    b = 'f';
    c = 'D';
    d = '&';
    e = ' ';
    printf("%c es: %i\n", a, ft_isalnum(a));
    printf("%c es: %i\n", b, ft_isalnum(b));
    printf("%c es: %i\n", c, ft_isalnum(c));
    printf("%c es: %i\n", d, ft_isalnum(d));
    printf("%c es: %i\n", e, ft_isalnum(e));

    return 0;
}
*/
