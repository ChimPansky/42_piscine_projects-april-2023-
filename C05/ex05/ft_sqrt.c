int	ft_sqrt(int nb)
{
	int	i;
	
	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	while (i <= nb / 4)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_sqrt(%d): %d\n", atoi(argv[1]), ft_sqrt(atoi(argv[1])));
	}
	else
		printf("Pls gief Number.\n");
	return (0);
}
*/
