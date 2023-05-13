/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:00:25 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 10:08:06 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	char_is_whitespace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(char *str)
{
	int	neg_mult;
	int	result;

	neg_mult = 1;
	result = 0;
	while (char_is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_mult *= -1;
		str++;
	}
	while (char_is_num(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * neg_mult);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str1 = "  		---+--+1234ab567";
	printf("ft_atoi str1: %s\n %d\n", str1, ft_atoi(str1));
	printf("atoi str1: %s\n %d\n", str1, atoi(str1));

	char	*str2 = "-65+48df15";
	printf("ft_atoi str2: %s\n %d\n", str2, ft_atoi(str2));
	printf("atoi str2: %s\n %d\n", str2, atoi(str2));

	char	*str3 = "0000";
	printf("ft_atoi str3: %s\n %d\n", str3, ft_atoi(str3));
	printf("atoi str3: %s\n %d\n", str3, atoi(str3));
	return (0);
}
*/
