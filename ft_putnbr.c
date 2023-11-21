/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:36:57 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/20 19:34:39 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*s;
	int		len;

	s = "0123456789";
	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		ft_putchar ('-');
		n = n * -1;
		len ++;
	}
	if (n > 9)
		len += ft_putnbr (n / 10);
	write(1, &s[n % 10], 1);
	len ++;
	return (len);
}
