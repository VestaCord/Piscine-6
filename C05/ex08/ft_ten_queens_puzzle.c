/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 21:45:08 by vtian             #+#    #+#             */
/*   Updated: 2025/03/28 22:32:26 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_solution(int *chessboard)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = chessboard[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

// check if queen is hanging: same col or diagonal
int	ft_find_attack(int *col, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (col[i] == col[row])
			return (1);
		if (col[i] == col[row] - (row - i)
			|| col[i] == col[row] + (row - i))
			return (1);
		i++;
	}
	return (0);
}

// place next queen/row only if none hanging
void	ft_ten_queens_recursive(int chessboard[], int row, int *solutions)
{
	int	i;

	i = 0;
	if (row == 10)
	{
		ft_print_solution(chessboard);
		(*solutions)++;
	}
	else
	{
		while (i < 10)
		{
			chessboard[row] = i;
			if (!ft_find_attack(chessboard, row))
				ft_ten_queens_recursive(chessboard, row + 1, solutions);
			i++;
		}
	}
}

// Displays all possible placements 
// of the ten queens on a chessboard which would contain ten columns
// and ten lines, without them being able to reach each other
// in a single move, and returns the number of possibilities.
// 0257948136$
// The sequence goes from left to right. The first digit represents
// the first Queen’s position in the first column
// (the index starting from 0). The Nth digit represents
// the Nth Queen’s position in the Nth column.
int	ft_ten_queens_puzzle(void)
{
	int	chessboard[10];
	int	solutions;

	solutions = 0;
	ft_ten_queens_recursive(chessboard, 0, &solutions);
	return (solutions);
}

// #include <stdio.h>
// int		main(void)
// {

// 	printf("Total Possibilities: %d\n", ft_ten_queens_puzzle());
// }
