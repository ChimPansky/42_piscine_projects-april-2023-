#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_is_prime(int nb);

int	ft_atoi(char *str)
{
	int	nb;
	int	len;
	int	order;

	len = ft_strlen(str);
	nb = 0;
	order = 1;
	//printf("strlen %d\n", len);
	while (len > 0)
	{
		nb += order * (str[len - 1] - '0');
		order *= 10;
		len--;
	}
	return (nb);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (*(str + ++i));

	return (i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
		nb = nb % 10;
	if (nb <= 9)
		ft_putchar(nb + '0');
}

int	ft_is_prime(int nb)
{
	int	i;
	
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (1);
		i += 2;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	valid;
	ft_putnbr(50406);
	valid = 1;
	if (argc != 2)
		valid = 0;
	if (valid)
	{
		int	nb;
		int	i;
		int	sum;
	
		i = 0;
		sum = 0;
		while (argv[1][i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
				valid = 0;
			i++;
		}
		if (valid)
		{
			nb = ft_atoi(argv[1]);
			printf("nb after atoi: %d\n", nb);
			i = nb;
			while (i > 1)
			{
				if (ft_is_prime(i))
					sum += i;
				i--;
			}
			ft_putnbr(sum);
			return (0);
		}
	}
	else
		write (1, "0\n", 2);
	return (0);
}
