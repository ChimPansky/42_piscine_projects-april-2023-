#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putnbr(atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
		printf("Pls gief Number.\n");
	return (0);
}
*/
