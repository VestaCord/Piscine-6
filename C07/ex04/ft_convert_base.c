/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:03:44 by vtian             #+#    #+#             */
/*   Updated: 2025/04/03 17:05:55 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			count_digit(long long num, int number_system);
long long	ft_recursive_power(int nb, int power);
char		*ft_itoa_base(long long input, char *base, int number_system);

char	*ft_preprocess(char *str, int *sign)
{
	int	step;

	step = 0;
	*sign = 1;
	while (*str == 0x20 || (*str >= 0x09 && *str <= 0x0D))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			*sign = -*sign;
		}
		str++;
	}
	return (str);
}

int	ft_base_check(char *str)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	if (!str || str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i + 1] != '\0' && str[i] == str[i + 1])
			return (0);
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
			return (0);
		if (str[i] >= 9 && str[i] <= 13)
			return (0);
		i++;
	}
	return (i);
}

int	ft_getnum(char c, char *base)
{
	int	result;

	result = 0;
	while (base[result] != '\0')
	{
		if (c == base[result])
			return (result);
		result++;
	}
	return (-1);
}

long long	ft_atoi_base(char *str, char *base, int number_system)
{
	long long	result;
	int			num;

	result = 0;
	while (*str != '\0')
	{
		num = ft_getnum(*str++, base);
		if (num == -1)
			return (result);
		result *= number_system;
		result += num;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			number_system_input;
	int			number_system_output;
	long long	result;
	char		*input;
	int			sign;

	number_system_input = ft_base_check(base_from);
	number_system_output = ft_base_check(base_to);
	if (nbr == 0 || number_system_input == 0 || number_system_output == 0)
		return (0);
	input = ft_preprocess(nbr, &sign);
	if (!(*input >= '0' && *input <= '9'))
		return (0);
	result = ft_atoi_base(input, base_from, number_system_input);
	result *= sign;
	return (ft_itoa_base(result, base_to, number_system_output));
}

// #include <stdio.h>
// int main (void)
// {
// 	char	*hex = "0123456789abcdef";
// 	char	*oct = "012345678";
// 	char	*dec = "0123456789";
// 	char	*bin = "01";
// 	char	*nbr = "  -   +-111101110";

// 	printf("%s to decimal: %s\n", nbr, ft_convert_base(nbr, bin, dec));
// 	printf("%s to octal: %s\n", nbr, ft_convert_base(nbr, bin, oct));
// 	printf("%s to hexadecimal: %s\n", nbr, ft_convert_base(nbr, bin, hex));
// }