/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:11:46 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/26 13:15:49 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *my_str1;
	char my_str2[2];
	char *my_str3;
	char my_str4[3];
	char *my_str5;
	char *my_str6;

	my_str1 = "abcdefghijklmnopqrst";
	//my_str2 = "sdh1f053t";
	my_str2[0] = '\x1a';
	my_str2[1] = 'x';
	my_str3 = "-+34dfg";
	my_str4[0] = 'a';
	my_str4[1] = '\x01';
	my_str4[2] = '1';
	my_str5 = "FJVB1D";
	my_str6 = "ASDhjghDs";

	printf("my_str1: %s\n", my_str1);
	printf("is_printable: %d\n", ft_str_is_printable(my_str1));
	printf("my_str2: %s\n", my_str2);
	printf("is_printable: %d\n", ft_str_is_printable(my_str2));
	printf("my_str3: %s\n", my_str3);
	printf("is_printable: %d\n", ft_str_is_printable(my_str3));
	printf("my_str4: %s\n", my_str4);
	printf("is_printable: %d\n", ft_str_is_printable(my_str4));
	printf("my_str5: %s\n", my_str5);
	printf("is_printable: %d\n", ft_str_is_printable(my_str5));
	printf("my_str6: %s\n", my_str6);
	printf("is_printable: %d\n", ft_str_is_printable(my_str6));
}
*/