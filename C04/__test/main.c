/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:57:43 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 22:18:59 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../ex00/ft_strlen.h"
#include "../ex01/ft_putstr.h"
#include "../ex02/ft_putnbr.h"
#include "../ex03/ft_atoi.h"
// #include "../ex04/ft_putnbr_base.h"
#include "../ex05/ft_atoi_base.h"

int	main(void)
{
	char 	non_printable_str[] = {3, 1, 2, 3, 15, 16, 17, 127, 128, 255, '\0'};
	char	border_str[] = {31, 32, 33, 125, 126, 127, 128, '\n', '\0'};
	char	printable_str[]="Bonjour les aminches.\n\tc'est fou\n";
	// ex00
	// printf("\nTesting: %s\n", "EX00 ft_strlen(printable_str)");
	// printf("Result: %d\n", ft_strlen(printable_str));
	// printf("Expected: %ld\n", strlen(printable_str));
	// printf("Result: %d\n", ft_strlen(non_printable_str));
	// printf("Expected: %ld\n", strlen(non_printable_str));
	// printf("Result: %d\n", ft_strlen(border_str));
	// printf("Expected: %ld\n", strlen(border_str));

	// ex01
	ft_putstr(printable_str);
	ft_putstr(non_printable_str);
	ft_putstr(border_str);

	// ex04
	// int	n = 42;
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";
	char	*custom = "qwertyuiop";

	// write(1, "decimal to decimal: ", 20);
	// ft_putnbr_base(n, dec);
	// write(1, "\ndecimal to binary: ", 20);
	// ft_putnbr_base(n, bin);
	// write(1, "\ndecimal to octal: ", 20);
	// ft_putnbr_base(n, oct);
	// write(1, "\ndecimal to hexadecimal: ", 26);
	// ft_putnbr_base(n, hex);
	// write(1, "\n", 1);
	
	// ex05
	printf("decimal from decimal: %d", ft_atoi_base("42", dec));
	printf("\ndecimal from binary: %d", ft_atoi_base("+-++-+---111100", bin));
	printf("\ndecimal from octal: %d", ft_atoi_base("42", oct));
	printf("\ndecimal from hexadecimal: %d\n", ft_atoi_base("    -++3 42", hex));
	printf("\ndecimal from custom: %d\n", ft_atoi_base("    +---+--pquwyti", custom));
}