/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_negative_possible.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:34:52 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/20 19:35:05 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_no_negative_possible(unsigned int num)
{
	int	nbr_len;

	nbr_len = 0;
	if (num > 9)
	{
		nbr_len = ft_no_negative_possible(num / 10);
		if (nbr_len == -1)
			return (-1);
		num = num % 10;
	}
	if (num <= 9)
	{
		if (ft_putchar (('0' + num)) == -1)
			return (-1);
		nbr_len++;
	}
	return (nbr_len);
}
