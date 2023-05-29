#include <unistd.h>

typedef	struct	s_queen
{
	int	x;
	int	y;
}				t_queen;

void	toggle_position(int dimension, int p_x, int p_y);
int		ft_set_queens(t_queen *queens, int dimension, int p_x);
void	ft_print_queens(t_queen *queens, int dimension);
int		ft_n_queens(int dimension);
int		ft_ten_queens_puzzle(void);
//void	ft_print_board(t_queen *queens, int dimension);

int	horizontals[20] = {0}; // N horizontals (3 < N <= 20)
int	pos_diag[39] = {0}; // (N * 2) - 1 pos diagonals (3 < N <= 20)
int	neg_diag[39] = {0}; // (N * 2) - 1 pos diagonals (3 < N <= 20)

void	toggle_position(int dimension, int p_x, int p_y)
{
	horizontals[p_y] = ! horizontals[p_y];
	pos_diag[p_x + p_y] = !pos_diag[p_x + p_y];
	neg_diag[p_y - p_x + dimension - 1] = !neg_diag[p_y - p_x + dimension - 1];
}

int	ft_set_queens(t_queen *queens, int dimension, int p_x)
{
	int	next_y;

	if (p_x < 0)
		return (0);
	next_y = queens[p_x].y;
	if (queens[p_x].y > -1)
	{
		toggle_position(dimension, p_x, queens[p_x].y);
		queens[p_x].y = -1;
	}
	while (++next_y < dimension && queens[p_x].y < 0)
	{
		if (!horizontals[next_y] && !pos_diag[p_x + next_y] && !neg_diag[next_y - p_x + dimension - 1])
		{
			toggle_position(dimension, p_x, next_y);
			queens[p_x].y = next_y;
		}
	}
	if (queens[p_x].y < 0)
		return (ft_set_queens(queens, dimension, p_x - 1));
	else if (p_x < dimension - 1)
		return (ft_set_queens(queens, dimension, p_x + 1));
	else
		return (1);
}

/* use this for debugging
void	ft_print_board(t_queen *queens, int dimension)
{
	int	i;
	int	j;

	i = -1;
	while (++i < dimension)
	{
		j = -1;
		while (++j < dimension)
		{
			if (queens[j].y == i)
				ft_putchar('Q');
			else
				ft_putchar('-');
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
		ft_putchar('\n');
}
*/

void	ft_print_queens(t_queen *queens, int dimension)
{
	int	i;
	char c;

	i = -1;
	while (++i < dimension)
	{
		if (queens[i].y > 9)
			c = 'A' - 10 + queens[i].y;
		else
			c = '0' + queens[i].y;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	ft_n_queens(int dimension)
{
	t_queen queens[20];
	int	i;
	int solution_count;

	solution_count = 0;
	if (dimension > 3)
	{
		i = -1;
		while (++i < dimension)
		{
			queens[i].x = i;
			queens[i].y = -1;
		}
		solution_count += ft_set_queens(queens, dimension, 0);
		ft_print_queens(queens, dimension);
		while (ft_set_queens(queens, dimension, dimension - 1))
		{
			ft_print_queens(queens, dimension);
			solution_count++;
		}
	}
	return (solution_count);
}

int	ft_ten_queens_puzzle(void)
{
	return(ft_n_queens(10));
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int nb = 0;
		nb = atoi(argv[1]);
		if (nb >= 0 && nb < 20)
			printf("Number of solutions for %d Queens: %d\n", nb, ft_n_queens(nb));
	}
	else
		printf("Number of solutions ft_ten_queens_puzzle(): %d\n", ft_ten_queens_puzzle());
	return (0);
}
*/
