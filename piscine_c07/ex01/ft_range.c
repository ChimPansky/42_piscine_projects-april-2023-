/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:47:21 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/03 21:20:02 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return ((int *)0);
	else
		size = max - min;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return ((int *)0);
	else
	{
		while (i < size)
		{
			result[i] = min + i;
			i++;
		}
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*my_result;
	int	i;
	int	j;
	int mymin;
	int mymax;

	//mymin = -214748;
	//mymax = 2147483;

	printf("Enter Min: ");
	scanf("%d", &mymin);

	printf("Enter Max: ");
	scanf("%d", &mymax);
	
	my_result = ft_range(mymin,mymax);
	i = 0;
	j = mymax - mymin;
	while (i < j)
		printf("my_result: %d\n", my_result[i++]);
	return (0);
}
*/
