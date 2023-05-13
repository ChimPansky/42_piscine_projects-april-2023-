/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:53:00 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/21 11:47:44 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void my_print_nb(int p_start, int p_length)
{
	int x_i;
	int x_j;
	int x_k;
	char x_c;
	
	x_i = p_start;
	while (x_i <= 10 - p_length)
	{	
		x_c = x_i + 48
		write(1, &x_c, 1) 
		x_j = x_i + 1;
		x_k = 1;
		while (x_k <= p_length)
		{
			//x_c = 
		}
		x_i++;
	}
}
void ft_print_combn(int n)
{
	int i;
	int j;
	int k;
	int counter;
	int ascii_offset;
	char c;

	i = 1;
	j = 0;
	counter = 0;
	ascii_offset = 48;

	while (i <= n)
	{
		while (j < i * 10)
		{
			if (counter > 0)
	                {
        	                write(1, ", ", 2);
                	}
			c = j + ascii_offset;
			write (1, &c, 1);
			counter++;
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_combn(1);
	return (0);
}
