/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:40:20 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/09/23 16:35:25 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_safe(int board[], int row, int col)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col ||                    // mesma coluna
			board[i] - i == col - row ||          // diagonal principal
			board[i] + i == col + row)            // diagonal secundária
			return (0);
		i++;
	}
	return (1);
}

void	print_solution(int board[])
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(board[i] + '0'); // imprime colunas como dígitos
		i++;
	}
	ft_putchar('\n');
}

void	solve(int row, int board[], int *count)
{
	int col;

	if (row == 10) // solução encontrada
	{
		print_solution(board);
		(*count)++;
		return ;
	}
	col = 0;
	while (col < 10)
	{
		if (is_safe(board, row, col))
		{
			board[row] = col;
			solve(row + 1, board, count);
		}
		col++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int count;

	count = 0;
	solve(0, board, &count);
	return (count);
}
