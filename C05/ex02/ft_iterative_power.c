int	ft_iterative_power(int nb, int power)
{
	int	result;
	
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
		
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("ft_iterative_power(%d, %d): %d\n", atoi(argv[1]), atoi(argv[2]), ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	}
	else
		printf("Pls gief 2 Numbers.\n");
	return (0);
}
*/
