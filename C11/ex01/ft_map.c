/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:16:34 by vtian             #+#    #+#             */
/*   Updated: 2025/04/09 21:28:37 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// receives integer array, applies a function to
// all elements of the array (in order) and returns an array containing
// all the return values
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new;
	int	i;

	new = (int *)malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		new[i] = f(tab[i]);
	return (new);
}
