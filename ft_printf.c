/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:34:03 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/20 19:35:49 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_orquest(char c, va_list info_content)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(info_content, int));
	else if (c == 's')
		count += ft_putstr(va_arg(info_content, char *));
	else if (c == 'p')
	{
		count += write(1, "0x", 2);
		count += ft_puthex(va_arg(info_content, unsigned long ), 'p');
	}
	else if (c == 'd')
		count += ft_putnbr(va_arg(info_content, int));
	else if (c == 'i')
		count += ft_putnbr(va_arg(info_content, int));
	else if (c == 'u')
		count += ft_no_negative_possible(va_arg(info_content, unsigned int));
	else if (c == 'x')
		count += ft_puthex(va_arg(info_content, unsigned int), c);
	else if (c == 'X')
		count += ft_puthex(va_arg(info_content, unsigned int), 'X');
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *arg, ...)
{
	va_list	info_content;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(info_content, arg);
	while (arg[i])
	{
		if (arg[i] == '%' && arg[i + 1])
		{
			count += ft_orquest(arg[i + 1], info_content);
			i++;
		}
		else
			count += write(1, &arg[i], 1);
		i++;
	}
	va_end(info_content);
	return (count);
}
