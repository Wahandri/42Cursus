/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:33:06 by manugar2          #+#    #+#             */
/*   Updated: 2025/01/17 19:09:53 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(long n, int base)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= base;
		len++;
	}
	return (len);
}

int	ft_print_int(int n)
{
	char	str[12];
	int		len;
	long	num;

	num = n;
	len = ft_numlen(num, 10);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		str[--len] = '0';
	return (ft_print_str(str));
}

int	ft_print_unsigned(unsigned int n)
{
	char	str[12];
	int		len;

	len = ft_numlen(n, 10);
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (len == 0)
		str[len] = '0';
	return (ft_print_str(str));
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	char	str[9];
	int		len;
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = ft_numlen(n, 16);
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = base[n % 16];
		n /= 16;
	}
	if (len == 0)
		str[len] = '0';
	return (ft_print_str(str));
}

int	ft_print_ptr(void *ptr)
{
	char				str[19];
	int					len;
	unsigned long long	addr;

	addr = (unsigned long long)ptr;
	len = ft_numlen(addr, 16);
	str[0] = '0';
	str[1] = 'x';
	str[len + 2] = '\0';
	while (addr > 0)
	{
		str[len + 1] = "0123456789abcdef"[addr % 16];
		addr /= 16;
		len--;
	}
	if (len == 2)
		str[len] = '0';
	return (ft_print_str(str));
}
