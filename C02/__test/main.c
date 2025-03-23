/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:41:14 by vtian             #+#    #+#             */
/*   Updated: 2025/03/20 16:59:56 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_ft.h"
#include "../ex01/ft_ultimate_ft.h"
#include "../ex02/ft_swap.h"
#include "../ex03/ft_div_mod.h"
#include "../ex04/ft_ultimate_div_mod.h"
#include "../ex05/ft_putstr.h"
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 10;
	ft_ft(&test);
	
	printf("Output: %d\n", test);

	int *p1 = &test;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	test = 69;
	
	ft_ultimate_ft(p9);
	printf("Output: %d\n", test);

	int test1 = 35;
	int test2 = 10;

	printf("Original, %d, %d\n", test1, test2);

	// ft_swap(&test1, &test2);

	printf("New, %d, %d\n", test1, test2);

	int div;
	int mod;

	ft_div_mod(test1, test2, &div, &mod);

	printf("%d / %d = %d R %d\n", test1, test2, div, mod);

	char *test_string = "Hello World!";

	printf("Expected text: %s", test_string);
	ft_putstr(test_string);
}
