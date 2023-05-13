/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:45:51 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 20:53:15 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("1! = %d\n", ft_recursive_factorial(1));
	printf("2! = %d\n", ft_recursive_factorial(2));
	printf("5! = %d\n", ft_recursive_factorial(5));
	printf("6! = %d\n", ft_recursive_factorial(6));
	printf("7! = %d\n", ft_recursive_factorial(7));
	printf("8! = %d\n", ft_recursive_factorial(8));
	printf("9! = %d\n", ft_recursive_factorial(9));
	printf("10! = %d\n", ft_recursive_factorial(10));
	printf("10! = %d\n", ft_recursive_factorial(10));
	printf("11! = %d\n", ft_recursive_factorial(11));
	printf("12! = %d\n", ft_recursive_factorial(12));
	printf("-1! = %d\n", ft_recursive_factorial(-1));
	printf("-10! = %d\n", ft_recursive_factorial(-10));
	return (0);
}
*/
