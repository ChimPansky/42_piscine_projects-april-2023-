int	ft_is_prime(int nb)
{
	int	i;
	
	i = 5;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7 || nb == 11 || nb == 13)
		return ( 1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 4 == 0)
		return (0);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / 4)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (!ft_is_prime(nb))
		return (ft_find_next_prime(nb + 1));
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_find_next_prime(%d): %d\n", atoi(argv[1]), ft_find_next_prime(atoi(argv[1])));
	}
	else
		printf("Pls gief Number.\n");
	return (0);
}
*/
