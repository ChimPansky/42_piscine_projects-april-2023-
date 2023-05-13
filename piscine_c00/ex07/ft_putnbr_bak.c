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

void ft_putnbr(int nb)
{
	int rest1;
	int x;
	int y;
	int ord;
	int offset;
	char c;

	ord = 1;
	offset = 48;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	
	rest1 = nb;

	while (rest1 > 10)
	{
		ord = ord * 10;
		rest1 = rest1 / 10;
	}
	
	rest1 = nb;

	while (ord > 0)
	{
		x = rest1 / ord;
		c = x + offset;
		write (1, &c , 1);
		rest1 = rest1 - x * ord;
		ord = ord / 10;	
	}


/*	rest1 = nb;

	while (rest1 != 0)
	{
		rest2 = rest1 % 10;
		rest1 = rest1 / 10;
		if (rest2 < 0)
		{
			c = rest2 * -1  + offset;
		}else
		{
			c = rest2 + offset;
		}
		write(1, &c, 1);
	}
*/
}

int	main()
{
	ft_putnbr(0);
	return (0);
}
