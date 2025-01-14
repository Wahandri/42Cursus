/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:55:19 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/03 20:59:29 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint('c'));
	printf("%d\n", ft_isprint('7'));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(7000));
	return (0);
}*/
