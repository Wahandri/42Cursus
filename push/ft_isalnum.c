/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:04:23 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/03 20:42:11 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' ))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalnum('c'));
	printf("%d\n", ft_isalnum('7'));
	printf("%d\n", ft_isalnum('%'));
	return (0);
}*/
