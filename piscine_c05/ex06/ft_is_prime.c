/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/02 09:59:04 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_for_prime(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	while (i <= nb / 4)
	{
		if (i * i >= nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	border;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	border = ft_sqrt_for_prime(nb);
	while (i <= border)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ft_is_prime (-17): %d\n", ft_is_prime(17));
	printf("ft_is_prime (-4): %d\n", ft_is_prime(-4));
	int	i = 0;
	while (i<500000)
	{
		printf("ft_is_prime (%d): %d\n", i, ft_is_prime(i));
		i++;
	}
	
	printf("ft_is_prime (2147483647): %d\n", ft_is_prime(2147483647));
	return (0);
}
*/
