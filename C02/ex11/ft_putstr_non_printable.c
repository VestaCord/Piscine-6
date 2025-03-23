/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:42:40 by vtian             #+#    #+#             */
/*   Updated: 2025/03/23 20:38:24 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char c)
{
	char		hex[2];
	const char	hexbase[17] = "0123456789ABCDE";

	hex[0] = hexbase[c / 16];
	hex[1] = hexbase[c % 16];
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
		{
			write(1, "\\", 1);
			ft_print_hex(str[i]);
		}
		else
			write(1, str + i, 1);
		i++;
	}
}
