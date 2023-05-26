#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putlong(long nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putlong(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putlong(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else
		ft_putchar('0' + nb % 10);
}

void	ft_putnbr(int nb)
{
	ft_putlong((long)nb);
}


void	ft_print_element(int n, char *arr_digits)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, arr_digits + i, 1);
		i++;
	}
	if (arr_digits[0] <= '9' - n)
		write(1, ", ", 2);
}

void	ft_get_next_element(int n, int index, char *arr_digits)
{
	if (index >= 0)
	{
		if (arr_digits[index] <= '9' - (n - index))
			arr_digits[index]++;
		else
		{
			ft_get_next_element(n, index - 1, arr_digits);
			arr_digits[index] = arr_digits[index - 1] + 1;
		}
	}
}

void	ft_print_combn(int n)
{
	char	digits[10];
	int	i;

	if (n < 1 && n > 10)
		return;
	i = 0;
	while (i < n)
	{
		digits[i] = '0' + i - (i == n - 1);
		i++;
	}
	while (1)
	{
		ft_get_next_element(n, n-1, digits);
		ft_print_element(n, digits);
		if (digits[0] == '9' - (n - 1))
			break;
	}
}

// this doesnt work properly - better use recursive version above...
void	ft_print_combn_iterative(int n)
{
	int		i;
	int		j;
	int		k;
	char	digits[10];

	i = 0;
	j = 0;
	k = 0;
	while (i <= 10 - n)
	{
		j = 0;
		k = 0;
		while (j < n)
		{
			digits[j] = i + j + k + '0';
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

// rofl and fix leading zero
void	ft_print_combn_bruteforce(int n)
{
	int current_num;
	int d;
	int tmp;
	int max;

	max = 0;
	tmp = 0;
	while (tmp < n)
	{
		max = max * 10 + (10 - n + tmp);
		current_num = current_num * 10 + tmp;
		tmp++;
	}
	while (current_num <= max)
	{
		tmp = current_num;
		d = 10;
		while (tmp)
		{
			if (tmp % 10 > d)
				break;
			d = tmp % 10;
			tmp = tmp / 10;
		}
		if (!tmp)
		{
			ft_putnbr(current_num);
			if (current_num != max)
				write(1, ", ", 2);
		}
		current_num++;
	}
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("ft_print_combn(%d): \n", atoi(argv[1]));
		ft_print_combn(atoi(argv[1]));
	}
	else
		printf("Pls gief Number (1-9).\n");
	return (0);
}
