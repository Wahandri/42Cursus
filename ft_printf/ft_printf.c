/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 13:00:00 by manugar2          #+#    #+#             */
/*   Updated: 2025/01/17 19:10:10 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	len;

	if (!str)
		return (write(1, "(null)", 6));
	len = 0;
	while (str[len])
		len++;
	return (write(1, str, len));
}

static int	process_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (format == 'd' || format == 'i')
		return (ft_print_int(va_arg(args, int)));
	if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format == 'X'));
	if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	return (ft_print_char('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += process_format(args, format[++i]);
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
