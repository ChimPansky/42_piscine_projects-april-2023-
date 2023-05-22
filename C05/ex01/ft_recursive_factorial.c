int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else 
		return (nb * ft_recursive_factorial(nb - 1));		
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_recursive_factorial(%d): %d\n", atoi(argv[1]), ft_recursive_factorial(atoi(argv[1])));
	}
	else
		printf("Pls gief Number.");
	return (0);
}
*/
