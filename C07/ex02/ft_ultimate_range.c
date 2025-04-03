/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:54 by vtian             #+#    #+#             */
/*   Updated: 2025/04/03 13:33:23 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// return 0 and range to null if min >= max
// return -1 and range to null if other error
// else return size and range from min to max
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (-1);
	i = 0;
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
// int	main(int argc, char **argv)
// {
// 	int	*range;
// 	int	max;
// 	int	min;
// 	int	i;
// 	int	size;
// 	if (argc != 3)
// 	{
// 		printf("Usage: cmd [0-9] [0-9]\n");
// 		return (1);
// 	};
// 	min = atoi(argv[1]);
// 	max = atoi(argv[2]);
// 	size = ft_ultimate_range(&range, min, max);
// 	if (size == -1)
// 	{
// 		printf("Unspecified Error (Length: -1)\n");
// 		return (1);
// 	}
// 	if (size == 0)
// 	{
// 		printf("Invalid Range Provided (Length: 0)\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d\t", range[i]);
// 		i++;
// 	}
// 	printf("\nLength: %d\n", size);
// 	return (0);
// }