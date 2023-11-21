/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:28:46 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/20 19:33:08 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				ft_printf(char const *arg, ...);
int				ft_putchar(int c);
int				ft_puthex(unsigned long n, char c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
unsigned int	ft_no_negative_possible(unsigned int num);

#endif