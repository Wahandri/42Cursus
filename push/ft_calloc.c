/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:24:07 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/11 19:44:54 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int count, int size)
{
	void	*ptr;
	int		i;

	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
    int *arr;
    int n = 5;

    arr = (int *)ft_calloc(n, sizeof(int));

    if (!arr)
    {
        printf("Error al asignar memoria\n");
        return (1);
    }

    printf("Arreglo inicializado a cero:\n");
    for (int i = 0; i < n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);


    free(arr);

    return (0);
}
*/
