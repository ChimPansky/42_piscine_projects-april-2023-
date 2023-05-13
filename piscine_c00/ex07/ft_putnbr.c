/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:55:16 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/20 19:00:59 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_order(int p_nb)
{
	int x_order;
	int x_rest;

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
	int	rest;
	int x;
	int ord;
	char c;
	
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
		write (1, &c , 1);
		rest = rest - x * ord;
		ord /= 10;	
	}
}
