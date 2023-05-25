// Added this comment for testbranch...

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

// wanna suggest u to find nice recursive solution for this:
// on each iteration u know ur current number and how many left
// u start like this for 3-digit nums: print_next_digit(0, 3);
// from inside loop 0 to 9, and call print_next_digit(i + 1, 2);
// loop i + 1 to 9 and call (i + 1, 1) and so on
// challenges are: stop conditions, commas, dealing with git
// try to do this in the branch i created
//------------------------------------------
// Ok, here i go :)

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

// this doesnt work properly - better use recursive version above...
void	ft_print_combn_iterative(int n)
{
	int	i;
	int	j;
	int	k;
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
/*
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
*/
