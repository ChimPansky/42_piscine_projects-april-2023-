/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:13:42 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 14:17:49 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		is_alpha;
	char	c;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0' && is_alpha)
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			i++;
		else
			is_alpha = 0;
	}
	return (is_alpha);
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
	my_str2 = "sdf153t";
	my_str3 = "-+34dfg";
	my_str4 = "GFDH";
	my_str5 = "FJVB1D";
	my_str6 = "ASDhjghDs";

	printf("my_str1: %s\n", my_str1);
	printf("is_alpha: %d\n", ft_str_is_alpha(my_str1));
	printf("my_str2: %s\n", my_str2);
	printf("is_alpha: %d\n", ft_str_is_alpha(my_str2));
	printf("my_str3: %s\n", my_str3);
	printf("is_alpha: %d\n", ft_str_is_alpha(my_str3));
	printf("my_str4: %s\n", my_str4);
	printf("is_alpha: %d\n", ft_str_is_alpha(my_str4));
	printf("my_str5: %s\n", my_str5);
	printf("is_alpha: %d\n", ft_str_is_alpha(my_str5));
	printf("my_str6: %s\n", my_str6);
	printf("is_alpha: %d\n", ft_str_is_alpha(my_str6));
}
*/
