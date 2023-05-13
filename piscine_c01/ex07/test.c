/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/25 16:23:28 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	placeholder[size];
	int i;

	i = size;

	while (i > 0)
	{
		placeholder[i] = tab[size - i];
		i--;
	}
	while (i < size)
	{
		tab[i] = placeholder[i];
		i++;
	}
}

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "abc";
	str2 = "defg";

	printf("%s",str1);
	/*
	int	asize;

	asize = 2;
	int	arr_int[asize];
	int *ptr_arr_int;

	arr_int[0] = 4;
	arr_int[1] = 2;
	ptr_arr_int = arr_int;
	printf("first int: %d\n", arr_int[0]);
	ft_rev_int_tab(ptr_arr_int, asize);
	printf("first int: %d\n", arr_int[0]);
*/
	return (0);
}
