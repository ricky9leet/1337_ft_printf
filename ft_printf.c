/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltellat <iltellat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:52:57 by iltellat          #+#    #+#             */
/*   Updated: 2025/03/16 15:04:44 by iltellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char specifier, va_list ap)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (specifier == 'p')
		return (ft_putstr("0x") + ft_putnbr_base(va_arg(ap, size_t),
				"0123456789abcdef"));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (specifier == 'u')
		return (ft_putunbr(va_arg(ap, unsigned int)));
	else if (specifier == 'x')
		return (ft_putnbr_base(va_arg(ap, unsigned int),
				"0123456789abcdef"));
	else if (specifier == 'X')
		return (ft_putnbr_base(va_arg(ap, unsigned int),
				"0123456789ABCDEF"));
	else if (specifier == '%')
		return (ft_putchar('%'));
	ft_putchar(specifier);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, format);
	count = 0;
	i = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
				break ;
			count += ft_format(format[++i], ap);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
