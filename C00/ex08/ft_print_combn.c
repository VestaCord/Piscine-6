/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:57:19 by vtian             #+#    #+#             */
/*   Updated: 2025/03/20 00:28:11 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_triplet(int triplet[3])
{
	char	output[5];

	output[0] = triplet[0] + '0';
	output[1] = triplet[1] + '0';
	output[2] = triplet[2] + '0';
	output[3] = ',';
	output[4] = ' ';
	if (triplet[0] == 7 && triplet [1] == 8 && triplet[2] == 9)
	{
		output[3] = '\n';
		output[4] = '\0';
	}
	write(1, output, 5);
}

void	ft_find_combn(int m, int n, int **number)
/*
	n is total number of digits
	m is current digit (indexed from 1)
*/
{
	int	max;

	max = 9 - n + m;
	*number[m] = *number[m - 1] + 1;
	while (*number[m] <= (max))
	{
		if (m == n)
		{
			ft_print_triplet(number);
			number[m]++;
		}
		else
		{
			ft_find_combn(m, n, &number);
		}
	}
}

void	ft_print_combn(int n)
// Create a fn to display all different combinations of n digits by asc order
{
	int number[9];

	ft_find_combn(1, n, &number);
}
