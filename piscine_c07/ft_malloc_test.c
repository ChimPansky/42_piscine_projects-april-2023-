/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:15:48 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/03 20:11:25 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define GRAVITY	9.81
#define LONGSTR 1000

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while(str[i])
		i++;
	return(i);
}

int	main(void)
{
	int		a;
	int		b;
	long	l;
	char	c;
	char	*str;
	char	*arr_str[] = {"aslfj", "asdlfnl", "asdlnkfl"};
	char	*memstr;

	memstr = (char*)malloc(sizeof(*memstr) * (LONGSTR + 1));

	a = 1;
	b = 1235465;
	str = "dskjbkjsdbkbsdfsdgfsdgdffdghfgfgjhfgfggggggggggggggggggggg";
	//arr_str = {"32135","45345","sd23","sd"};

	printf("size of int: %lu\n", sizeof(int));
	printf("size of char: %lu\n", sizeof(char));
	printf("size of float: %lu\n", sizeof(float));
	printf("size of long: %lu\n", sizeof(long));
	printf("size of char*: %lu\n", sizeof(char*));
	printf("size of a: %lu\n", sizeof(a));
	printf("size of b*: %lu\n", sizeof(b));
	printf("size of str*: %lu\n", sizeof(str));
	printf("size of arr_str*: %lu\n", sizeof(arr_str));
	printf("size of arr_str[2]: %lu\n", sizeof(arr_str[2]));
	printf("size of *arr_str[2]: %lu\n", sizeof(*arr_str[2]));

	float my_grav;

	my_grav = GRAVITY;
	printf("my_grav: %f\n", my_grav);
	printf("size of my_grav: %lu\n", sizeof(my_grav));
	
	printf("ft_strlen of memstr: %d\n", ft_strlen(memstr));
	int	i = 0;
	while(i < LONGSTR)
		memstr[i++] = '!';
	printf("ft_strlen of memstr: %d\n", ft_strlen(memstr));
	return(0);

}
