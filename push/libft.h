/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manugar2 <manugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:48:19 by manugar2          #+#    #+#             */
/*   Updated: 2024/12/11 20:03:58 by manugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(char c);
int		ft_isalpha( int arg);
int		ft_isascii(int c);
int		ft_isdigit( int arg);
int		ft_isprint(int arg);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dst, const void *src, unsigned int n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(char *s, int c);
int		ft_strlcpy(char *dst, char *src, int size);
int		ft_strlen( char *str);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strrchr(char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(char *str);
void	*ft_calloc(int count, int size);
char	*ft_strdup(char *src);

#endif
