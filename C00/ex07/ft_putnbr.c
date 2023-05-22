#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

ft_putuint(unsigned int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

// dont use random number: min int is sys dependant
// either use INT_MIN from limits.h
// or tipe conversion as below
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
