/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:02:57 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/11 20:10:41 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char *s, int start, int len)
{
    char *substr;
    int i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len && s[start])
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';
    return (substr);
}

#include <stdio.h>
int main ()
{
    char *s = "Hello World!";
    char *substr = ft_substr(s, 6, 5);
    printf("%s\n", substr);

    return 0;
}