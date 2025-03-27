/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:57 by vtian             #+#    #+#             */
/*   Updated: 2025/03/27 15:54:28 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Copies a string for a new one by allocating memory, unless malloc fails
char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest = (char *) malloc(sizeof(char) * (src_len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*src = "string";
// 	printf("My: %s\n", ft_strdup(src));
// 	printf("Or: %s\n", strdup(src));
// 	}