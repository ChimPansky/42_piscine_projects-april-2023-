/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/25 18:37:47 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	print_array(int *tab, int size)
{
	int i;

	i = 0;

	while (i <= size -1)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	placeholder[size];
	int i;

	i = size - 1;

	while (i >= 0)
	{
		placeholder[i] = tab[size - 1 - i];
		i--;
	}
	i++;
	while (i <= size - 1)
	{
		tab[i] = placeholder[i];
		i++;
	}
}

int	main(void)
{
	int	asize;

	asize = 8;

	int	arr_int[8] = {-10, 0, 5, 15, 105, 1050, 1051, 106548};

	int *ptr_arr_int = arr_int;

	printf("Array before: ");
	print_array(ptr_arr_int, asize);
	ft_rev_int_tab(ptr_arr_int, asize);
	printf("Array after: ");
	print_array(ptr_arr_int, asize);

	return (0);
}
