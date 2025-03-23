/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:47:47 by vtian             #+#    #+#             */
/*   Updated: 2025/03/21 16:55:59 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
// returns dest ptr
{
	int i;
	char *temp; 

	int i = 0;
	temp = dest;
	while (1)
	{
		dest[i] = src[i];
	}
	return temp;
}