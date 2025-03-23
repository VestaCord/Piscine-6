/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:28 by vtian             #+#    #+#             */
/*   Updated: 2025/03/23 21:21:56 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenate src to dest
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	if (src[0] == '\0')
		return (dest);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
