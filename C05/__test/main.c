/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:57:43 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 22:32:12 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../ex01/ft_recursive_factorial.h"

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(42));
}
