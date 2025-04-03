/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:03:50 by vtian             #+#    #+#             */
/*   Updated: 2025/04/03 17:05:43 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	count_digit(long long num, int base)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= base;
		count++;
	}
	return (count);
}

long long	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

char	*ft_itoa_base(long long input, char *base_size, int base)
{
	char		*result;
	int			digit;
	int			i;
	long long	num;

	digit = count_digit(input, base);
	result = malloc(digit + 1 + (input < 0));
	if (!result)
		return ((void *)0);
	i = 0;
	if (input < 0)
	{
		result[i++] = '-';
		input = -input;
	}
	while (digit > 0)
	{
		num = input / ft_recursive_power(base, digit - 1);
		result[i++] = base_size[num];
		input -= num * ft_recursive_power(base, digit-- - 1);
	}
	result[i] = '\0';
	return (result);
}
