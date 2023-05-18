void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;
	int	div_res;
	int	mod_res;

	x = 33;
	y = 6;
	
	ft_div_mod(x, y, &div_res, &mod_res);
	printf("Values of div_res, mod_res after ft_div_mod(%d, %d): %d, %d\n", x, y, div_res, mod_res);
	return (0);
}
*/
