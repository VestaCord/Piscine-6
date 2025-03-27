/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:54 by vtian             #+#    #+#             */
/*   Updated: 2025/03/27 16:04:41 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (-1);
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = -10;
// 	int	max = 10;
// 	int	i = 0;
// 	int	*range;
// 	int	size = ft_ultimate_range(&range, min, max);

// 	i = 0;
// 	printf("\nRange Size: %d\n", size);
// 	while (i < size)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	free(range);
// }