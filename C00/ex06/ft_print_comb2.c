/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:45:34 by vtian             #+#    #+#             */
/*   Updated: 2025/03/19 21:27:27 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(int n1, int n2)
// Decimal is truncated by default (123 % 100 = 23, 23 / 10 = 2)
{
	char	output[7];

	output[0] = '0' + (n1 % 100 / 10);
	output[1] = '0' + (n1 % 10);
	output[2] = ' ';
	output[3] = '0' + (n2 % 100 / 10);
	output[4] = '0' + (n2 % 10);
	output[5] = ',';
	output[6] = ' ';
	if (n1 == 98 && n2 == 99)
	{
		output[5] = '\n';
		output[6] = '\0';
	}
	write(1, output, 7);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_write_comb(n1, n2);
			n2++;
		}
		n1++;
	}
}
