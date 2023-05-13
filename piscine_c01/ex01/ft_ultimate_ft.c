/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:14:49 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/24 13:31:39 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
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
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ultimate_ptr;

	x = 0;

	ptr1 = &x;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ultimate_ptr = &ptr8;
	ft_putnbr(x);
	ft_ultimate_ft(ultimate_ptr);
	ft_putnbr(x);
	return (0);
}
