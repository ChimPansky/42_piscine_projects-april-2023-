/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:54:59 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/24 14:36:37 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;

	*a = x / y;
	*b = x % y;
}

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
	int y;
	
	int *ptrx;
	int *ptry;

	x = 22;
	y = 5;

	ptrx = &x;
	ptry = &y;
	ft_ultimate_div_mod(ptrx, ptry);
	ft_putnbr(x);
	ft_putnbr(y);
	return (0);
}
