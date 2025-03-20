/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:41:14 by vtian             #+#    #+#             */
/*   Updated: 2025/03/20 16:29:47 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_ft.h"
#include "../ex01/ft_ultimate_ft.h"
#include <stdio.h>

int	main(void)
{
	int	test_int;
	int *********nbr;

	test_int = 69;
	printf("ft_ft(%d)", test_int);
	ft_ft(&test_int);
	printf("Final int: %d\n", test_int);

	*********nbr = 69;
	printf("ft_ultimate_ft(%d)", *********nbr);
	ft_ultimate_ft(nbr);
	printf("Final int: %d\n", *********nbr);
}
