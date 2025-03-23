/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:56:34 by vtian             #+#    #+#             */
/*   Updated: 2025/03/23 21:55:46 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// The strlcat() function appends the NUL-terminated string src to end of dst
// It will append at most size - strlen(dst) - 1 bytes.
// If result >= size, the string was truncated.
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	const unsigned int	len_dest = ft_strlen(dest);
	const unsigned int	len_src = ft_strlen(src);

	i = 0;
	j = len_dest;
	while (src[i] && (j + 1) < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[len_dest + j] = '\0';
	return (len_dest + len_src);
}
