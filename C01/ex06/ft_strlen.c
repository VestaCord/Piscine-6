/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:37:59 by vtian             #+#    #+#             */
/*   Updated: 2025/03/23 18:43:41 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that counts and returns the number of char in a str
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
