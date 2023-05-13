/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:53:52 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 21:00:36 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ < power)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2^3 = %d\n", ft_iterative_power(2,3));
	printf("0^3 = %d\n", ft_iterative_power(0,3));
	printf("2^0 = %d\n", ft_iterative_power(2,0));
	printf("2^1 = %d\n", ft_iterative_power(2,1));
	printf("2^-1 = %d\n", ft_iterative_power(2,-1));
	printf("3^3 = %d\n", ft_iterative_power(3,3));
	printf("5^2 = %d\n", ft_iterative_power(5,2));
	printf("6^4 = %d\n", ft_iterative_power(6,4));
	return (0);
}
*/