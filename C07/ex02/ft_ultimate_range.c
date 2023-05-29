#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		//printf("size <= 0");
		*range = NULL;
		return (0);
	}
	if (!(*range = (int *) malloc(sizeof(int) * size)))
		return (-1);
	i = -1;
	while (++i < size)
		*(*range + i) = min + i;
	return (size);
}

#include <stdio.h>
void	ft_print_ultimate_range(int **range, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		printf("%d\n", *(*range + i));
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	*my_range;
		int	my_min;
		int	my_max;
		int my_size;

		my_min = atoi(argv[1]);
		my_max = atoi(argv[2]);

		my_size = ft_ultimate_range(&my_range, my_min, my_max);
		printf("my_size: %d\n", my_size);
		if (my_range)
			ft_print_ultimate_range(&my_range, my_size);
		if (my_range)
			free(my_range);
	}
	else
		printf("Please gief Min and Max.\n");
	return (0);
}
*/
