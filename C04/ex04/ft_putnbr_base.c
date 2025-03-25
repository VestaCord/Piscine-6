/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:10:21 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 22:07:30 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// returns base if none of: +, -, non-printable, repeats
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	onumber[255];
	long	n;
	int		size;
	int		i;

	size = ft_check_base(base);
	if (size < 2)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		onumber[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (--i >= 0)
		write(1, onumber + i, 1);
}
