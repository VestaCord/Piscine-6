/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 22:39:36 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 23:01:17 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// can be made more efficient with exponentiation by squaring
double	ft_recursive_power(double nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

// fibonacci obtained using Binet's formula, ultimately less efficient
// since power function is really bad
int	ft_fibonacci(int index)
{
	const double	phi = 1.618033988749895;
	const double	psi = -0.618033988749895;

	return ((int)((ft_recursive_power(phi, index)
			- ft_recursive_power(psi, index)) / (phi - psi)));
}
