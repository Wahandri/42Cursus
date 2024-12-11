/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:22:54 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/06 00:01:56 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	c;

	printf("Ingrese un caracter: ");
	scanf("%i", &c);
	printf("El caracter %i es ASCII? %i\n", c, ft_isascii(c));

	return 0;
}
*/
