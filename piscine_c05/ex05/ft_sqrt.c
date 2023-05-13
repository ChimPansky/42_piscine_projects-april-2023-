/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:24:06 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/02 14:41:26 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
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
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ft_sqrt(-10): %d\n", ft_sqrt(-10));
	printf("ft_sqrt(-1): %d\n", ft_sqrt(-1));
	int	i = 0;
	while (i<100)
	{
		printf("ft_sqrt (%d): %d\n", i, ft_sqrt(i));
		i++;
	}
	printf("ft_sqrt(16384): %d\n", ft_sqrt(16384));

	printf("ft_sqrt(-2147483647): %d\n", ft_sqrt(-2147483648));
	printf("ft_sqrt(2147483647): %d\n", ft_sqrt(2147483647));
	return (0);
}
*/
