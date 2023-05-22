int	ft_iterative_factorial(int nb)
{
	int	result;
	
	result = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		result *= nb - 1;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_iterative_factorial(%d): %d\n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
	}
	else
		printf("Pls gief Number.\n");
	return (0);
}
*/
