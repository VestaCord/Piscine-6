/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:41:14 by vtian             #+#    #+#             */
/*   Updated: 2025/03/23 18:48:29 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_ft.h"
#include "../ex01/ft_ultimate_ft.h"
#include "../ex02/ft_swap.h"
#include "../ex03/ft_div_mod.h"
#include "../ex04/ft_ultimate_div_mod.h"
#include "../ex05/ft_putstr.h"
#include "../ex06/ft_strlen.h"
#include "../ex07/ft_rev_int_tab.h"
#include "../ex08/ft_sort_int_tab.h"
#include <stdio.h>

int	main(void)
{
	int	test;

	test = 10;
	ft_ft(&test);
	
	printf("ft_ft(&%d);\n", test);
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
	printf("ft_ultimate_ft(p9);\n");
	printf("Output: %d\n", test);
	
	int test1 = 35;
	int test2 = 10;
	
	printf("ft_swap(&%d, &%d);\n", test1, test2);
	printf("Original, %d, %d\n", test1, test2);
	ft_swap(&test1, &test2);
	printf("New, %d, %d\n", test1, test2);
	ft_swap(&test1, &test2);

	printf("%d / %d\n", test1, test2);
	ft_ultimate_div_mod(&test1, &test2);
	printf("= %d R %d\n", test1, test2);

	// ex05
	printf("\nTesting: %s\n", "ft_putstr(test_string);");
	char *test_string = "Hello World!";
	ft_putstr(test_string);

	//ex06
	printf("\nTesting: %s\n", "ft_strlen(\"meow! \"))");
	printf("Result: %d\n", ft_strlen("meow! "));

	// ex07
	printf("\nTesting: %s\n", "ft_rev_int_tab(tab, size);");
	int	tab[10] = {0, 3, 1, 1, 4, 10, 6, 7, 8, 9};
	int size = 10;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("\nArray after: \n");
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
	printf("\n");

	// ex08
	printf("\nTesting: %s\n", "ft_sort_int_tab(tab, size);");
	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("\nArray after: \n");
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
	printf("\n");

}
