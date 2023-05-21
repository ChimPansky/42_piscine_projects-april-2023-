#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combo(int x, int y)
{
	ft_putchar('0' + x / 10);
	ft_putchar('0' + x % 10);
	ft_putchar(' ');
	ft_putchar('0' + y / 10);
	ft_putchar('0' + y % 10);
	if (x != 98 || y != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2()
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write_combo(i, j);
			j++;
		}
		i++;
	}

}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
