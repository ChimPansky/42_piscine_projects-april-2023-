#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putlong(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putlong(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putlong(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else
		ft_putchar('0' + nb % 10);	
}

void	ft_putnbr(int nb)
{
	ft_putlong((long)nb);
}
/*
void	ft_putuint(unsigned int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

// dont use random number: min int is sys dependant
// either use INT_MIN from limits.h
// or type conversion as below
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putuint((unsigned)(-1 * (n + 1)) + 1)
	}
	else
		ft_putuint(nb);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_putnbr(%d):\n", atoi(argv[1]));
		ft_putnbr(atoi(argv[1]));
	}
	else
		printf("Pls gief Number.\n");
	return (0);
}
*/
