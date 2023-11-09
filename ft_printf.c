/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:06:41 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/09 18:21:33 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_orquest(char c, va_list info_content) //siempre que pones una palabra clave de tipo de dato, recibes una variable. Aqui la variable es: c e info_content
{
	if(c == 'c')
	{
		ft_putchar(va_arg(info_content, char)); // lo casteamos dependiendo lo que pida la función a la que llamo. 
	}
	else if(c == 's')
	{
		ft_putstr(va_arg(info_content, char*));
	}
	else if(c == 'p')
	{
		ft_puthex(va_arg(info_content, ()), 'p');
	}
	else if(c == 'd')
	{
		ft_putnbr()
	}
	else if(c == 'i')
	else if(c == 'u')
	else if(c == 'x')
	{
		ft_puthex(va_arg(info_content, ()), 'x');	
	}
	else if(c == 'X')
	{
		ft_puthex(va_arg(info_content, ()), 'X');
	}
	else if(c == '%')
}

int	ft_printf(char const *arg, ...)
{
	va_list	info_content; // este sería el ap
	//va a contener la información de las variables que le metas
	int i;
	i = 0;
	
	va_start(info_content, arg);
	while(arg[i])
	{
		if(arg[i] == %)
		{
			ft_orquest(arg[i + 1], info_content);
		}
		write(1, &arg[i], 1);
		i++;
	}
	va_end(info_content);
	return (i);
}