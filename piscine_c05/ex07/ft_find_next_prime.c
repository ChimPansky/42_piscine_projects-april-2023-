/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/02 10:18:19 by tkasbari         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;
	i = 200000000;
	printf("ft_find_next_prime (18): %d\n", ft_is_prime(18));
	printf("ft_find_next_prime (%d): %d\n", i, ft_find_next_prime(i));
	i = 214748364;
	printf("ft_find_next_prime (%d): %d\n", i, ft_find_next_prime(i));
	i = 2147400002;
	printf("ft_find_next_prime (%d): %d\n", i, ft_find_next_prime(i));
	i = 2147483644;
	printf("ft_find_next_prime (%d): %d\n", i, ft_find_next_prime(i));
	return (0);
}
*/
