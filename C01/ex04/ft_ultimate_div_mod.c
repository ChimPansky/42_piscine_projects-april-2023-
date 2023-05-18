void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 33;
	y = 6;

	
	printf("Values of x, y before ft_ultimate_div_mod(&x, &y): %d, %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Values of x, y after ft_ultimate_div_mod(&x, &y): %d, %d\n", x, y);
	return (0);
}
