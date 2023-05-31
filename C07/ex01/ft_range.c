#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	size = max - min;
	if (size <= 0)
		return (0);

	result = (int *) malloc(sizeof(int) * size);
	if (!result)
		return (0);
	i = -1;
	while (++i < size)
		result[i] = min + i;
	return (result);
}

#include <stdio.h>
void	ft_print_range(int *range, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		printf("%d\n", *(range + i));
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	*my_range;
		int	my_min;
		int	my_max;

		my_min = atoi(argv[1]);
		my_max = atoi(argv[2]);
		my_range = ft_range(my_min, my_max);
		if (my_range)
			ft_print_range(my_range, my_max - my_min);
		free(my_range);
	}
	else
		printf("Please gief Min and Max.\n");
	return (0);
}
*/
