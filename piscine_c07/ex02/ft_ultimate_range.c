/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:11:42 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/05 19:48:43 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_assign_values(int *values, int p_min, int p_size)
{
	int	i;

	i = 0;
	while (i < p_size)
	{
		values[i] = p_min + i;
		i++;
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = (int *)0;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		range = (int **)0;
	if (!result)
		return (-1);
	else
	{
		*range = result;
		ft_assign_values(result, min, size);
	}
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	mymin;
	int	mymax;
	int	*myptr;
	int	i;
	int	mysize;
	
	printf("Enter Min: ");
	scanf("%d", &mymin);

	printf("Enter Max: ");
	scanf("%d", &mymax);

	//mymin = -45355;
	//mymax = 4578;
	i = 0;

	mysize = ft_ultimate_range(&myptr, mymin, mymax);
	
	if (mysize)
	{
		while (i < mysize)
		{
			printf("%d\n", myptr[i]);
			i++;
		}
	}
	return (0);
}
*/
