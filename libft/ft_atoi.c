/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:08:16 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/16 23:21:14 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	const char		*n;
	int				sign;
	unsigned int	r;

	i = 0;
	n = nptr;
	sign = 1;
	r = 0;
	while ((n[i] >= 9 && n[i] <= 13) || n[i] == ' ')
		i++;
	if (n[i] == '+' || n[i] == '-')
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		r = r * 10 + (n[i] - '0');
		i++;
	}
	return (r * sign);
}

/* int	main(void)
{
	printf("String: \"   -1234\" -> Number: %d\n", ft_atoi("   -1234"));
	printf("String: \"42\" -> Number: %d\n", ft_atoi("42"));
	printf("String: \"+5678\" -> Number: %d\n", ft_atoi("+5678"));
	printf("String: \"  0\" -> Number: %d\n", ft_atoi("  0"));
	printf("String: \"abc\" -> Number: %d\n", ft_atoi("abc"));
	printf("String: \"  -42abcd\" -> Number: %d\n", ft_atoi("  -42abcd"));
	return (0);
} */