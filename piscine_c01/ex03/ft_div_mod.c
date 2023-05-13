/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:43:22 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/24 14:17:55 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void ft_ultimate_div_mod(int *a, int *b)
{
	
}

void 

*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	
	int res_division;
	int res_modulu;
	
	int *ptr_div;
	int *ptr_mod;

	ptr_div = &res_division;
	ptr_mod = &res_modulu;

	x = 22;
	y = 5;

	ft_div_mod(x, y, ptr_div, ptr_mod);
	ft_putnbr(res_division);
	ft_putnbr(res_modulu);
	return (0);
}
