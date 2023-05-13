/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:32:23 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/24 13:42:52 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int save_int;

	save_int = *a;
	*a = *b;
	*b = save_int;
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

	ptrx = &x;
	ptry = &y;
	x = 1;
	y = 2;

	ft_putnbr(x);
	ft_putnbr(y);
	ft_swap(ptrx, ptry);
	ft_putnbr(x);
	ft_putnbr(y);
	return (0);
}
