/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:55 by vtian             #+#    #+#             */
/*   Updated: 2025/03/27 16:03:14 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = -10;
// 	int	max = 10;
// 	int	i = 0;
// 	int	*range = ft_range(min, max);
// 	int	size = max - min;

// 	while (i < size)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	free(range);
// }