/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 00:03:03 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/06 00:03:11 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	c;

	printf("Ingrese un caracter: ");
	scanf("%i", &c);
	printf("El caracter %i es ASCII? %i\n", c, ft_isprint(c));

	return 0;
}
*/
