/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:52:32 by vtian             #+#    #+#             */
/*   Updated: 2025/04/09 21:42:07 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Receives void pointer, f that receives an int and applies it to tab[i]
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
