
#include <unistd.h>
#include <stdio.h>

int	ft_map[9][9];
int ft_views[36];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_clear_map(int dimension)
{
	int	x;
	int	y;

	y = 0;
	while (y < dimension)
	{
		x = 0;
		while (x < dimension)
			ft_map[x++][y] = 0;
		y++;
	}
}

void	ft_print_map(int dimension)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < dimension)
	{
		x = 0;
		while (x < dimension)
		{
			ft_putchar('0' + ft_map[x][y]);
			if (x == dimension - 1)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			x++;
		}
		y++;
	}
}

int	ft_check_views(int type, int p_dimension, int p_x, int p_y)
{
	int	box_count;
	int	visible_boxes;
	int	i;
	int	highest;

	highest = 0;
	visible_boxes = 0;
	if (type < 2)
		box_count = ft_views[type * p_dimension + p_x];
	else
		box_count = ft_views[type * p_dimension + p_y];

	if (type == 0)
	{
		i = 0;
		while (i <= p_y)
		{
			if (ft_map[p_x][i] > highest)
			{
				visible_boxes++;
				highest = ft_map[p_x][i];
			}
			i++;
		}
	}
	if (type == 1)
	{
		i = p_dimension - 1;
		while (i >= 0)
		{
			if (ft_map[p_x][i] > highest)
			{
				visible_boxes++;
				highest = ft_map[p_x][i];
			}
			i--;
		}
	}
	if (type == 2)
	{
		i = 0;
		while (i <= p_x)
		{
			if (ft_map[i][p_y] > highest)
			{
				visible_boxes++;
				highest = ft_map[i][p_y];
			}
			i++;
		}
	}
	if (type == 3)
	{
		i = p_dimension - 1;
		while (i >= 0)
		{
			if (ft_map[i][p_y] > highest)
			{
				visible_boxes++;
				highest = ft_map[i][p_y];
			}
			i--;
		}
	}
	//printf("check_views(%d, %d, %d, %d) | visible_boxes/box_count: %d/%d\n", type, p_dimension, p_x, p_y, visible_boxes, box_count);
	if (visible_boxes != box_count)
		return (0);
	return (1);
}

int	ft_check_position(int p_dimension, int p_x, int p_y)
{
	int	i;
	int	val;
	//ft_print_map(p_dimension);
	val = ft_map[p_x][p_y];

	i = 0;
	while (i < p_x)
	{
		if (ft_map[i++][p_y] == val)
			return (0);
	}
	i = 0;
	while (i < p_y)
	{
		if (ft_map[p_x][i++] == val)
			return (0);
	}
	if (p_y == p_dimension - 1 && (!ft_check_views(0, p_dimension, p_x, p_y) || !ft_check_views(1, p_dimension, p_x, p_y)))
		return (0);
	if (p_x == p_dimension - 1 && (!ft_check_views(2, p_dimension, p_x, p_y) || !ft_check_views(3, p_dimension, p_x, p_y)))
		return (0);
	return (1);
}

int	ft_set_box(int p_dimension, int p_x, int p_y)
{
	if (p_y < 0)
		return (0);
	if (ft_map[p_x][p_y] == p_dimension)
	{
		ft_map[p_x][p_y] = 0;
		if (p_x == 0)
			return (ft_set_box(p_dimension, p_dimension - 1, p_y - 1));
		else
			return (ft_set_box(p_dimension, p_x - 1, p_y));
	}
	else
		ft_map[p_x][p_y]++;
	if (!ft_check_position(p_dimension, p_x, p_y))
	{
		return (ft_set_box(p_dimension, p_x, p_y));
	}
	else
	{
		if (p_x < p_dimension - 1 || p_y < p_dimension - 1)
		{
			if (p_x == p_dimension - 1)
				ft_set_box(p_dimension, 0, p_y + 1);
			else
				ft_set_box(p_dimension, p_x + 1, p_y);
		}
		else
			return (1);
	}
	return (1);
}

void	ft_throw_error(char *errmsg)
{
	ft_putstr(errmsg);
	ft_putchar('\n');
}


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i;
		int	arglen;
		int size;

		arglen = ft_strlen(argv[1]);
		if (arglen != 31 && arglen != 39 && arglen != 47 && arglen != 55 && arglen != 63 && arglen != 71)
		{
			ft_throw_error("Error. Argument too long/too short.");
			return (1);
		}
		size = (ft_strlen(argv[1]) / 2 + 1) / 4;
		i = 0;
		while (argv[1][i])
		{
			if ((i % 2 == 1 && argv[1][i]!= ' ') || (i % 2 == 0 && (argv[1][i] < '0' || argv[1][i] > '9')))
			{
				ft_throw_error("Error. Argument can only contain digits and spaces.");
				return (1);
			}
			if (i % 2 == 0)
			{
				ft_views[i / 2] = argv[1][i] - '0';
			}
			i++;
		}
		ft_clear_map(size);
		ft_set_box(size, 0, 0);
		if (ft_map[0][0])
			ft_print_map(size);
		else
			ft_throw_error("Error. No solution found.");
	}
	else
	{
		ft_throw_error("Error. Wrong argument count.");
		return (1);
	}
	return (0);
}
