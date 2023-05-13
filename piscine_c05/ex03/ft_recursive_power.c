/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:01:21 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 21:08:26 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2^3 = %d\n", ft_recursive_power(2,3));
	printf("0^3 = %d\n", ft_recursive_power(0,3));
	printf("2^0 = %d\n", ft_recursive_power(2,0));
	printf("2^1 = %d\n", ft_recursive_power(2,1));
	printf("2^-1 = %d\n", ft_recursive_power(2,-1));
	printf("3^3 = %d\n", ft_recursive_power(3,3));
	printf("5^2 = %d\n", ft_recursive_power(5,2));
	printf("6^4 = %d\n", ft_recursive_power(6,4));
	return (0);
}
*/