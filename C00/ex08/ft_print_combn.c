#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_element(int n, int *arr_digits)
{
	int	i;

	i = 0;
	while (i < n)
	{	
		ft_putchar('0' + arr_digits[i]);
		i++;
	}
	if (arr_digits[0] < 10 - n)
		write(1, ", ", 2);
}

void	ft_get_next_element(int n, int index, int *arr_digits)
{
	if (index >= 0)
	{
		if (arr_digits[index] < 10 - n + index)
			arr_digits[index]++;
		else
		{
			if(index > 0 && (arr_digits[index - 1] + 2) < 10)
				arr_digits[index] = arr_digits[index - 1] + 2;
			ft_get_next_element(n, index - 1, arr_digits);
			arr_digits[index] = arr_digits[index - 1] + 1;
		}
	}
}


void	ft_print_combn(int n)
{
	int	digits[10];
	int	i;
	int	print_next;
	
	if (n >= 1 && n <= 9)
	{
		i = 0;
		print_next = 1;
		while (i < n)
		{
			digits[i] = i;
			i++;
		}
		ft_print_element(n, digits);
		while (print_next)
		{
			ft_get_next_element(n, n-1, digits);
			if (digits[0] == 10 - n)
				print_next = 0;
			ft_print_element(n, digits);
		}
	}
}
/*
int	main(void)
{
	ft_print_combn(10);
	return (0);
}
*/
