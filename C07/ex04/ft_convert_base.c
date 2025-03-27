/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:45 by vtian             #+#    #+#             */
/*   Updated: 2025/03/27 18:49:32 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_count_digits(int nbr, char *base, int digits)
{
	int		size;
	int		tmp;

	size = 0;
	while (base[size])
		size++;
	tmp = nbr;
	if (tmp < 0)
	{
		tmp *= -1;
		digits++;
	}
	while (tmp >= size)
	{
		tmp /= size;
		digits++;
	}
	digits++;
	return (digits);
}

// Returns the result of the conversion of string nbr from decimal to base_to
void	ft_putnbr_base(int nbr, char *base, char *converted)
{
	int		size;
	long	tmp;
	int		first;
	int		last;

	size = ft_strlen(base);
	last = ft_count_digits(nbr, base, 0);
	tmp = nbr;
	first = 0;
	if (tmp < 0)
	{
		converted[0] = '-';
		tmp *= -1;
		first++;
	}
	last--;
	while (tmp >= size)
	{
		converted[last] = base[tmp % size];
		tmp /= size;
		last--;
	}
	if (tmp < size)
		converted[first] = base[tmp];
}

// Returns the result of the conversion of string nbr from base_from to base_to
// nbr, base_from, base_to may be not writable.
// nbr will follow the same rules as ft_atoi_base (from an other module).
// Beware of '+', '-', and ' '.
// The number represented by nbr must fit inside an int.
// If a base is wrong, NULL should be returned.
// The returned number can only be prefixed by '-' if necessary.
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		decimal;
	int		digits;

	if (ft_check_base(base_to) == 0 || ft_check_base(base_from) == 0)
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	digits = ft_count_digits(decimal, base_to, 0);
	converted = (char *)malloc(sizeof(char) * (digits + 1));
	if (converted == NULL)
		return (0);
	ft_putnbr_base(decimal, base_to, converted);
	converted[digits] = '\0';
	return (converted);
}

// #include <stdio.h>
// int main (void)
// {
// 	char	*hex = "0123456789abcdef";
// 	char	*oct = "012345678";
// 	char	*dec = "0123456789";
// 	char	*bin = "01";
// 	char	*nbr = "111101110";

// 	printf("%s to decimal: %s\n", nbr, ft_convert_base(nbr, bin, dec));
// 	printf("%s to octal: %s\n", nbr, ft_convert_base(nbr, bin, oct));
// 	printf("%s to hexadecimal: %s\n", nbr, ft_convert_base(nbr, bin, hex));
// }
