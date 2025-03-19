/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:47:07 by vtian             #+#    #+#             */
/*   Updated: 2025/03/19 23:56:26 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
// prints any number +-2147483647
{
	char	output[12];
	int		nb_local;
	int		i;

	i = 0;
	while (i < 12)
	{
		output[i] = '\0';
		i++;
	}
	output[0] = '\0';
	nb_local = nb;
	if (nb < 0)
	{
		output[0] = '-';
		nb_local = nb * -1;
	}
	i = 0;
	while (nb_local > 0 && i < 12)
	{
		output[11 - i] = '0' + nb_local % 10;
		nb_local /= 10;
		i++;
	}
	write(1, output, 12);
}
