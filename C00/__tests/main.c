/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:21:22 by vtian             #+#    #+#             */
/*   Updated: 2025/03/20 00:29:25 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_putchar.h"
#include "../ex01/ft_print_alphabet.h"
#include "../ex02/ft_print_reverse_alphabet.h"
#include "../ex03/ft_print_numbers.h"
#include "../ex04/ft_is_negative.h"
#include "../ex05/ft_print_comb.h"
#include "../ex06/ft_print_comb2.h"
#include "../ex07/ft_put_nbr.h"
#include "../ex08/ft_print_combn.h"

int	main(void)
{
	printf("\nft_putchar(a)\n");
	ft_putchar('a');
	printf("\nft_print_alphabet()\n");
	ft_print_alphabet();
	printf("\nft_print_reverse_alphabet()\n");
	ft_print_reverse_alphabet();
	printf("\nft_print_numbers()\n");
	ft_print_numbers();
	printf("\nft_is_negative(-1)\n");
	ft_is_negative(-1);
	printf("\nft_print_comb()\n");
	ft_print_comb();
	printf("\nft_print_comb2()\n");
	ft_print_comb2();
	printf("\nft_putnbr(-7351984)\n");
	ft_putnbr(-7351984);
	// printf("\nft_print_combn(3)\n");
	// ft_print_combn(3);
	printf("\n");
	return (0);
}
