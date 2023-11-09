/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irolaizo <irolaizo@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:39:10 by irolaizo          #+#    #+#             */
/*   Updated: 2023/11/09 18:10:15 by irolaizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
	int		total;
	char	*harry;
	char	caracter;

//%u Imprime un número decimal (base 10) sin signo - tiene que imprimir positivo.
	total = -120;
	printf("%u\n", total);

	total = 120;
	printf("%u\n", total);

//%d Imprime un número decimal (base 10).	
	total = printf("hola\n");
	printf("%d\n", total);
	total = ft_printf("Mi ft: %i, hola\n");
	printf("%d\n", total);

//%i Imprime un entero en base 10.
	total = printf("mundo\n");
	printf("%i\n", total);

//%s Imprime una string (como se define por defecto en C).
	harry = "believe";
	total = printf("%s\n", harry);
	printf("%d\n", total);
	harry = NULL;
	total = printf("%s\n", harry);
	printf("%d\n", total);

//%c Imprime un solo carácter.
	caracter = 'a';
	total = printf("%c\n", caracter);
	printf("%d\n", total);

//%p El puntero void * dado como argumento se imprime en formato hexadecimal - imprime dirección de memoria del puntero.
	harry = "believe";
	total = printf("%p\n", harry);
	printf("%d\n", total);
	harry = NULL;
	total = printf("%p\n", harry);
	printf("%d\n", total);

//%x Imprime un número hexadecimal (base 16) en minúsculas - imprime de hexadecimal a decimal (los punteros estan en formato hexadecimal)
	total = 42;
	total = printf("%x\n", total);
	printf("%d\n", total);
	total = 0;
	total = printf("%x\n", total);
	printf("%d\n", total);

//%X Imprime un número hexadecimal (base 16) en mayúsculas.
	total = 42;
	total = printf("%X\n", total);
	printf("%d\n", total);

//% % para imprimir el símbolo del porcentaje
	total = printf("%%\n");
	printf("%d\n", total);
}