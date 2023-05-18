void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 21;

	printf("Value of x, y before ft_ft(): %d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("Value of x, y after ft_ft(): %d, %d\n", x, y);
	return(0);
}
*/
