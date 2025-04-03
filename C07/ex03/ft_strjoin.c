/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:51 by vtian             #+#    #+#             */
/*   Updated: 2025/04/03 14:16:21 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_malloc_joined_str(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	*joined_str;

	sum = 0;
	i = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(strs[i]);
			i++;
		}
		sum += ft_strlen(sep) * size - 1; // size -1 should be in parentheses, if not there is extra size
	}
	joined_str = (char *) malloc(sizeof(char) * sum); // should + 1 for null terminator
	if (joined_str == NULL)
		return (0);
	return (joined_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*joined_str;

	joined_str = ft_malloc_joined_str(size, strs, sep);
	i = 0;
	c = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			joined_str[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			joined_str[c++] = sep[j++];
		}
		i++;
	}
	joined_str[c] = '\0';
	return (joined_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
// 		int size = 6;
// 		char *sep = "! ";
// 		int	i = 0;
// 		char	*joined_str = ft_strjoin(size, strs, sep);
// 		while (i < size)
// 		{
// 				printf("String in the index %d: %s\n", i, strs[i]);
// 		i++;
// 	}
// 	printf("New string: %s\n", joined_str);
// 	free(joined_str);
// }