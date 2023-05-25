#include <unistd.h>

typedef	struct	s_queen
{
	int	x;
	int	y;
}				t_queen;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_horizon(t_queen *queens, t_queen queen, int dimension)
{
	int	i;
	
	i = 0;
	while (i < dimension)
	{
		if (queens[i].y >= 0 && queens[i].x != queen.x)
			if (queens[i].y == queen.y)
				return (0);
		i++;
	}
	return (1);
}

int	check_diag(t_queen *queens, t_queen queen, int dimension)
{
	int	i;
	int	j;
	int	x;
	int	y;
	
	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (i < dimension)
	{
		if (queens[i].y >= 0 && queens[i].x != queen.x)
		{
			x = queen.x;
			//y = queen.y;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			while (x >= 0 && y >= 0)
					
		}
			
			if (queens[i]->y == queen.y)
				return (0)
		i++;
	}
	return (1);
}

int	ft_check_board(t_queen *queens, int dimension)
{
	int	i;
	
	i = 0;
	while (i < dimension)
	{
		if (queens[i]->y >= 0)
			{
				if (!check_horizon(queens, queen, dimension) || 
					!check_diag(queens, queen, dimension))
					return (0);
			}
		i++;
	}
	return (1);
}

void	ft_set_queens(t_queen *queens, int dimension)
{
	
	queen->x = p_x;
	queen->y = p_y;
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
			j++;
		}
		i++;
	ft_putchar('\n');
	}
}

void	ft_print_queens(t_queen *queens, int dimension)
{
	int	i;
	
	i = 0;
	while (i < dimension)
		ft_putchar(queens[i++].y - '0');
	ft_putchar('\n');
}

#include <stdio.h>
int	ft_my_ten_queens(int dimension)
{
	t_queen queens[10];
	int	i;
	
	i = 0;
	while (i < dimension)
	{
		queens[i].x = i;
		//queens[i]->y = -1;
		queens[i].y = i;
		i++;
	}
	
	ft_print_board(queens, dimension);
	
	i = 0;
	while (i < dimension)
	{
		printf("%d", check_horizon(queens, queens[i], dimension));
		i++;
	}
	i = 0;
	while (i < dimension)
	{
		printf("%d", check_diag(queens, queens[i], dimension));
		i++;
	}
	//ft_set_queens();
	//ft_check_queens();
	
	//t_queen	my_point;
	return (1);
	
}

int	ft_ten_queens_puzzle(void)
{
	return(ft_my_ten_queens(10));
}


#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
		ft_ten_queens_puzzle();
	}
	return (0);
}

