/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:07:05 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/24 10:32:00 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	get_order(int p_nb)
{
	int	x_order;
	int	x_rest;

	x_order = 1;
	x_rest = p_nb;
	while (x_rest >= 10)
	{
		x_order *= 10;
		x_rest /= 10;
	}
	return (x_order);
}

void	ft_putnbr(int nb)
{
	int		rest;
	int		x;
	int		ord;
	char	c;

	rest = nb;
	if (rest < 0)
	{
		write(1, "-", 1);
		rest *= -1;
	}	
	ord = get_order(rest);
	while (ord > 0)
	{
		x = rest / ord;
		c = x + 48;
		write(1, &c, 1);
		rest = rest - x * ord;
		ord /= 10;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int x;
	int *my_first_ptr;

	x = 0;
	ft_putnbr(x);
	my_first_ptr = &x;
	ft_ft(my_first_ptr);
	ft_putnbr(x);
	return (0);
}
*/
