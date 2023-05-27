#include <unistd.h>

typedef	struct	s_queen
{
	int	x;
	int	y;
}				t_queen;

void	ft_putchar(char c);
void	ft_print_board(t_queen *queens, int dimension);
//int		check_horizon(t_queen *queens, t_queen queen, int dimension);
//int		check_pos_diag(t_queen *queens, t_queen queen, int dimension);
//int		check_neg_diag(t_queen *queens, t_queen queen, int dimension);
int		ft_check_board(t_queen *queens, int dimension);
int		ft_set_queens(t_queen *queens, int dimension, int p_x);
void	ft_print_board(t_queen *queens, int dimension);
void	ft_print_queens(t_queen *queens, int dimension);
int		ft_my_ten_queens(int dimension);
int		ft_ten_queens_puzzle(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	check_horizon(t_queen *queens, t_queen queen, int dimension)
{
	int	i;
	
	i = 0;
	while (i < dimension)
	{
		if (queens[i].y >= 0 && queens[i].x != queen.x)
		{
			if (queens[i].y == queen.y ||
				queens[i].x + queens[i].y == queen.x + queen.y ||
				queens[i].y - queens[i].x == queen.y - queen.x)
				return (0);
		}
		i++;
	}
	return (1);
}
*/
int	ft_check_board(t_queen *queens, int dimension)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < dimension)
	{
		if (queens[i].y >= 0)
		{
			j = 0;
			while (j < dimension && queens[j].y >= 0 && i != j)
			{
				if (queens[i].y == queens[j].y ||
					queens[i].x + queens[i].y == queens[j].x + queens[j].y ||
					queens[i].y - queens[i].x == queens[j].y - queens[j].x)
					return (0);
				j++;
			}			
		}
		i++;
	}
	return (1);
}

int	ft_set_queens(t_queen *queens, int dimension, int p_x)
{
	if (queens[p_x].y == dimension - 1)
	{
		if (p_x > 0)
		{
			queens[p_x].y = -1;
			return (ft_set_queens(queens, dimension, p_x - 1));
		}
	}
	else
	{
		queens[p_x].y++;
		if (!ft_check_board(queens, dimension))
			return (ft_set_queens(queens, dimension, p_x));
		else if (p_x < dimension - 1)
			return (ft_set_queens(queens, dimension, p_x + 1));
	}
	if (ft_check_board(queens, dimension) && p_x == dimension - 1)
		return (1);
	else
		return (0);
}

void	ft_print_board(t_queen *queens, int dimension)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < dimension)
	{
		j = 0;
		while (j < dimension)
		{
			if (queens[j].y == i)
				ft_putchar('Q');
			else
				ft_putchar('-');
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
		ft_putchar('\n');
}

void	ft_print_queens(t_queen *queens, int dimension)
{
	int	i;
	
	i = -1;
	while (++i < dimension)
	{
		if (queens[i].y > 9)
			ft_putchar('A' - 10 + queens[i].y);
		else
			ft_putchar('0' + queens[i].y);
	}
	ft_putchar('\n');
}

int	ft_my_ten_queens(int dimension)
{
	t_queen queens[20];
	int	i;
	int solution_count;

	solution_count = 0;
	i = -1;
	while (++i < dimension)
	{
		queens[i].x = i;
		queens[i].y = -1;
	}
	solution_count += ft_set_queens(queens, dimension, 0);
	ft_print_queens(queens, dimension);
	ft_print_board(queens, dimension);
	while (ft_set_queens(queens, dimension, dimension - 1))
	{	
		ft_print_queens(queens, dimension);
		//ft_print_board(queens, dimension);
		solution_count++; 
	}	
	return (solution_count);	
}

int	ft_ten_queens_puzzle(void)
{
	return(ft_my_ten_queens(12));
}
/*
#include <stdio.h>
int main(void)
{
	printf("Number of solutions ft_ten_queens_puzzle(): %d\n", ft_ten_queens_puzzle());

	return (0);
}
*/
