/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:16:02 by vtian             #+#    #+#             */
/*   Updated: 2025/03/26 01:17:14 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_str(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ft_print_str(argv[i]);
		ft_print_str("\n");
		i++;
	}
}