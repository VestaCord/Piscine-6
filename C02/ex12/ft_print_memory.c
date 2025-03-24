/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:44:59 by vtian             #+#    #+#             */
/*   Updated: 2025/03/24 16:34:07 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// recursively calls itself to print 0x digits
void	ft_print_hex(unsigned long long n, int leading_zero)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";

	if (n < 16 && leading_zero == 1)
		write (1, "0", 1);

	if (n >= 16)
	{
		ft_print_hex(n / 16, 0);
		ft_print_hex(n % 16, 0);
	}
	else
		write(1, hex_base + n, 1);
}

// void ptr is 8 byte (unsigned long long) only on 64-bit
// better to use uintptr from stdint, but i'm not sure if allowed
void	ft_print_addr(void	*addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = (unsigned long long)addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			write(1, "0", 1);
		tmp /= 16;
	}
	ft_print_hex((unsigned long long)addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			write (1, " ", 1);
		if (i < size)
		{
			ft_print_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
			write(1, "  ", 2);
	}
	i = -1;

	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			write(1, ".", 1);
		else
			write(1, c + i, 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	col;

	i = 0;
	while (i * 16 < size)
	{
		if (i < size / 16)
			col = 16;
		else
			col = size % 16;
		
		ft_print_addr(addr + (i * 16));
		write(1, ":", 1);

		ft_print_data(addr + (i * 16), col);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}