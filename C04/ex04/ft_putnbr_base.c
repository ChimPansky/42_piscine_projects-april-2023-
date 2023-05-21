#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_base_valid(char *base)
{
	int	len;
	int	i;
	int	j;
	
	len = ft_strlen(base);
	
	i = 0;
	while (i < len - 1)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nr;
	int	baselen;

	nr = nbr;
	baselen = ft_base_valid(base);
	if (baselen > 1)
	{
		if (nr < 0)
		{
			write(1, "-", 1);
			nr *= -1;
		}
		if (nr >= baselen)
		{
			ft_putnbr_base(nr / baselen, base);
			ft_putnbr_base(nr % baselen, base);
		}
		if (nr < baselen)
			ft_putchar(*(base + nr));
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
		write(1, "\n", 1);
	}
	else
		printf("Pls gief Number and base.\n");
	return (0);
}
*/
