/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:08:59 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/02 14:37:41 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("fibonacci(-50): %d\n", ft_fibonacci(-50));
	printf("fibonacci(-1): %d\n", ft_fibonacci(-1));
	printf("fibonacci(0): %d\n", ft_fibonacci(0));
	printf("fibonacci(1): %d\n", ft_fibonacci(1));
	printf("fibonacci(2): %d\n", ft_fibonacci(2));
	printf("fibonacci(3): %d\n", ft_fibonacci(3));
	printf("fibonacci(4): %d\n", ft_fibonacci(4));
	printf("fibonacci(5): %d\n", ft_fibonacci(5));
	printf("fibonacci(6): %d\n", ft_fibonacci(6));
	printf("fibonacci(7): %d\n", ft_fibonacci(7));
	printf("fibonacci(30): %d\n", ft_fibonacci(30));
	return (0);
}
*/
