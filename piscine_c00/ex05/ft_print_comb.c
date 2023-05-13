/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:38:27 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/22 18:06:09 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put_element(int p_i, int p_j, int p_k, int p_counter)
{
	char	c;

	if (p_counter > 0)
		write(1, ", ", 2);
	c = p_i + 48;
	write(1, &c, 1);
	c = p_j + 48;
	write(1, &c, 1);
	c = p_k + 48;
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	int		counter;

	i = 0;
	counter = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_put_element(i, j, k, counter);
				counter++;
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
