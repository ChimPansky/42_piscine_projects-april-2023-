void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>
void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d\n", tab[i++]);
}

int	main(void)
{
	int	i;
	int my_tab[10];

	i = 0;
	while (i < 10)
	{
		my_tab[i] = i;
		i++;
	}

	print_tab(my_tab, 10); 
	ft_rev_int_tab(my_tab, 10);
	print_tab(my_tab, 10); 
	return (0);
}
*/
