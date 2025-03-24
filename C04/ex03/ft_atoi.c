/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:10:37 by vtian             #+#    #+#             */
/*   Updated: 2025/03/24 18:22:52 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// while there are '+' and '-', 'i' is increased
	while (str[i] == '-' || str[i] == '+')
	{
		// If it's a minus sign
		// the value of the 'sign' is inverted
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	// after the spaces and signs of + and -
	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	// In the end, if the number of '-' is even, the number will be positive
	// If the number of '-' is odd, the number will be negative
	return (sign * sum);
}