/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/25 19:01:45 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	print_array(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int	curr;

	i = 1;

	while (i < size)
	{
		curr = tab[i];
		j = i - 1;
		while (j >= 0 && curr < tab[j])
		{
			tab[j+1] = tab[j];
			j--;
		}
		tab[j+1] = curr;
		i++;
	}
}

int	main(void)
{
	int	asize;

	asize = 9;

	int	arr_int[9] = {1050, 5, 1051, -34, 15, 105, -10, 106548, 1};

	int *ptr_arr_int = arr_int;

	printf("Array before: ");
	print_array(ptr_arr_int, asize);
	ft_sort_int_tab(ptr_arr_int, asize);
	printf("Array after: ");
	print_array(ptr_arr_int, asize);

	return (0);
}
