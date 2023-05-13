/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:32:25 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 14:39:06 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	char *my_str2;
	char *my_str3;
	char *my_str4;
	char *my_str5;
	char *my_str6;

	my_str1 = "abcdefghijklmnopqrst";
	my_str2 = "OASF";
	my_str3 = "";
	my_str4 = "H";
	my_str5 = "FJVB1D";
	my_str6 = "100";

	printf("my_str1: %s\n", my_str1);
	printf("is_uppercase: %d\n", ft_str_is_uppercase(my_str1));
	printf("my_str2: %s\n", my_str2);
	printf("is_uppercase: %d\n", ft_str_is_uppercase(my_str2));
	printf("my_str3: %s\n", my_str3);
	printf("is_uppercase: %d\n", ft_str_is_uppercase(my_str3));
	printf("my_str4: %s\n", my_str4);
	printf("is_uppercase: %d\n", ft_str_is_uppercase(my_str4));
	printf("my_str5: %s\n", my_str5);
	printf("is_uppercase: %d\n", ft_str_is_uppercase(my_str5));
	printf("my_str6: %s\n", my_str6);
	printf("is_uppercase: %d\n", ft_str_is_uppercase(my_str6));
}
*/
