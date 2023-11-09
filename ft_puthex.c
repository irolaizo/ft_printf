/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:40:38 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/09 17:50:14 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthex (unsigned long n, char c)
{
	char	*str;
	int		len;

	if (c == 'x' || c == 'p')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	len = 0;
	if (n > 15)
		len += ft_puthexa(n / 16, c);
	write (1, &str[n % 16], 1);
	len++;
	return (len);
}