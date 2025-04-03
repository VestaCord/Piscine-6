/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:43 by vtian             #+#    #+#             */
/*   Updated: 2025/04/03 16:43:30 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	instring(char c, char *charset)
{
	while (charset && *charset)
	{
		if (c == *charset++)
			return (1);
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	result;

	if (!str)
		return (0);
	result = 1;
	while (*str)
	{
		if (instring(*str++, charset))
			result++;
	}
	return (result);
}

char	*ft_strcpy(char **src, char *charset)
{
	char	*start_str;
	int		str_len;
	char	*dest;
	char	*start_dest;

	start_str = *src;
	str_len = 0;
	while (**src != '\0' && instring(**src, charset) == 0)
	{
		str_len++;
		(*src)++;
	}
	if (str_len == 0)
		return (NULL);
	dest = malloc(str_len + 1);
	start_dest = dest;
	if (!dest)
		return (NULL);
	while (str_len-- > 0)
		*dest++ = *start_str++;
	*dest = '\0';
	return (start_dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**pointers;
	int		wordcount;
	char	**str_pointer;
	int		i;

	wordcount = count_word(str, charset);
	pointers = (char **)malloc(sizeof(char *) * wordcount + 1);
	if (!pointers)
		return (NULL);
	str_pointer = &str;
	i = 0;
	while (wordcount > 0)
	{
		pointers[i] = ft_strcpy(str_pointer, charset);
		if (pointers[i] != NULL)
			i++;
		(*str_pointer)++;
		wordcount--;
	}
	pointers[i] = 0;
	return (pointers);
}