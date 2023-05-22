int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_fibonacci(%d): %d\n", atoi(argv[1]), ft_fibonacci(atoi(argv[1])));
	}
	else
		printf("Pls gief Number.\n");
	return (0);
}
*/
