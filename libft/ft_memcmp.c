/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpineda- <cpineda-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:37:59 by cpineda-          #+#    #+#             */
/*   Updated: 2024/12/22 17:52:36 by cpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	// Test case 1: Identical strings
	char str1[] = "Hello, world!";
	char str2[] = "Hello, world!";
	int result = memcmp(str1, str2, strlen(str1));
	printf("Test 1:Comparing '%s' and '%s' Result: %d\n", str1, str2, result);

	// Test case 2: Different strings
	char str3[] = "Hello, world!";
	char str4[] = "Hello, earth!";
	result = memcmp(str3, str4, strlen(str3));
	printf("Test 2:Comparing '%s' and '%s' Result: %d\n", str3, str4, result);

	// Test case 3: Partial comparison
	char str5[] = "abcdef";
	char str6[] = "abcxyz";
	result = memcmp(str5, str6, 3);
	printf("Test 3:First 3 B of '%s' and '%s' Result: %d\n", str5, str6, result);

	// Test case 4: Empty strings
	char str7[] = "";
	char str8[] = "";
	result = memcmp(str7, str8, 1);
	printf("Test 4:omparing '%s' and '%s' Result: %d\n", str7, str8, result);

	// Test case 5: Different lengths
	char str9[] = "Short";
	char str10[] = "Shorter";
	result = memcmp(str9, str10, strlen(str9));
	printf("Test 5:Comparing '%s' and '%s' Result: %d\n", str9, str10, result);

	// Test case 6: Comparing numbers
	int num1[] = {1, 2, 3};
	int num2[] = {1, 2, 4};
	result = memcmp(num1, num2, sizeof(int) * 3);
	printf("Test 6: Comparing integer arrays -> Result: %d\n", result);

	return (0);
} */