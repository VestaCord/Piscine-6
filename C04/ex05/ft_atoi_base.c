/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:11:29 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 22:11:02 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// return onumber in decimal if found in base, else -1
int	ft_base_match(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

// atoi preprocess: traverses spaces and signs, returns sign ptr
int	ft_atoi_preprocess(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_sign = sign;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		sum;
	int		current;
	int		base_size;

	base_size = ft_check_base(base);
	if (base_size < 2)
		return (0);
	sum = 0;
	sign = 1;
	i = ft_atoi_preprocess(str, &sign);
	current = ft_base_match(str[i], base);
	while (current != -1)
	{
		sum = (sum * base_size) + current;
		i++;
		current = ft_base_match(str[i], base);
	}
	return (sign * sum);
}
