/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:47:41 by vtian             #+#    #+#             */
/*   Updated: 2025/03/20 00:17:56 by vtian            ###   ########.fr       */
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

void	ft_print_comb(void)
/*
	Displays all unique combinations of three unique digits
	Digits and combinations both listed by ascending order
	012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$
*/
{
	int	number[3];

	number[0] = 0;
	while (number[0] <= 7)
	{
		number[1] = number[0] + 1;
		while (number[1] <= 8)
		{
			number[2] = number[1] + 1;
			while (number[2] <= 9)
			{
				ft_print_triplet(number);
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
