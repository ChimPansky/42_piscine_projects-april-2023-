#include "ft_stock_str.h"

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	long	nr;

	nr = nb;
	if (nr < 0)
	{
		write(1, "-", 1);
		nr *= -1;
	}
	if (nr >= 10)
	{
		ft_putnbr(nr / 10);
		ft_putnbr(nr % 10);
	}
	if (nr < 10)
		ft_putchar('0' + nr);
}

void	ft_show_tab(t_stock_str *stock_strs)
{
	int	i;

	i = -1;
	while (stock_strs[++i].str)
	{
		ft_putstr(stock_strs[i].str);
		ft_putchar('\n');
		ft_putnbr(stock_strs[i].size);
		ft_putchar('\n');
		ft_putstr(stock_strs[i].copy);
		ft_putchar('\n');
	}
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		t_stock_str	*my_stocks;
		my_stocks = ft_strs_to_tab(argc, argv);
		my_stocks[1].str[0] = 'X';
		//my_stocks[2].copy = my_stocks[3].str;
		//my_stocks[2].copy = my_stocks[5].str;
		if (my_stocks)
		{
			ft_show_tab(my_stocks);
			ft_free_tab(my_stocks, argc);
		}
	}
	else
	{
		printf("Please enter arguments for ft_strs_to_tab(int ac, char **av)");
	}

	return (0);
}
*/
