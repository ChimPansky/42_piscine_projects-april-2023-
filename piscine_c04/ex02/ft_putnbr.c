/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:57:24 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 13:18:10 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power(int base, int exponent)
{
	int	i;
	int	result;

	i = 2;
	result = base;
	if (exponent == 0)
		return (1);
	else if (exponent < 0)
		return (0);
	else
	{
		while (i >= 2 && i <= exponent)
		{
			result *= base;
			i++;
		}
	}
	return (result);
}

int	ft_get_order(int nb, int base)
{
	if (nb / base != 0)
		return (1 + ft_get_order(nb / base, base));
	else
		return (1);
}

void	ft_putnbr(int nb)
{
	int		my_order;
	int		i;
	int		is_neg;
	char	buffer[12];

	i = 0;
	is_neg = 0;
	my_order = ft_get_order(nb, 10);
	if (nb < 0)
	{
		is_neg = 1;
		buffer[i++] = '-';
	}
	while (my_order > 0)
	{
		if (is_neg)
			buffer[i++] = '0' - nb / ft_power(10, my_order-- - 1) % 10;
		else
			buffer[i++] = '0' + nb / ft_power(10, my_order-- - 1) % 10;
	}
	buffer[i] = '\0';
	write(1, buffer, i);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr(-2415);
	write(1,"\n",1);
	ft_putnbr(0);
	write(1,"\n",1);
	ft_putnbr(56465564);
	write(1,"\n",1);
	ft_putnbr(-746907);
	write(1,"\n",1);
	ft_putnbr(-2147483648);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	return (0);
}
*/
