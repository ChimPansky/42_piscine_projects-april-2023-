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

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int k;
	int	digits[10];

	i = 0;
	j = 0;
	k = 0;
	while (i <= 10 - n)
	{
		j = 0;
		k = 0;
		while (j < n)
		{
			digits[j] = i + j + k;
			if (j == n - 1)
			{
				ft_print_element(n, digits);
				if (i < 10 - n)
				{
					k++;
					j = 0 + k;
				}
				else
					j++;
			}
			else
				j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
