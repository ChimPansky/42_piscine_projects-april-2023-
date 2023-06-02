#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!result)
		return (0);
	i = -1;
	while(src[++i])
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}
#include <stdio.h>
void	ft_free_tab(t_stock_str *stock_strs, int len)
{
	int	i;

	i = -1;
	while (++i < len)
	{
		free(stock_strs[i].str);
		free(stock_strs[i].copy);
	}
	free(stock_strs);
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *my_stocks;

	if (!(my_stocks = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = -1;
	while (++i < ac)
	{
		my_stocks[i].size = ft_strlen(av[i]);
		my_stocks[i].str = ft_strdup(av[i]);
		my_stocks[i].copy = ft_strdup(av[i]);
		if (!my_stocks[i].str || !my_stocks[i].copy)
		{
			ft_free_tab(my_stocks, ac);
			return (0);
		}
	}
	my_stocks[i].str = 0;
	return (my_stocks);
}
/*
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
