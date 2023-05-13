/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:54:10 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 13:19:22 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	ascii_set[128];
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 1)
		return (0);
	while (i++ <= 128)
		ascii_set[i - 1] = 0;
	i = 0;
	while (i < base_len)
	{
		if (ascii_set[(int)base[i]] || base[i] == '-' || base [i] == '+')
			return (0);
		else
			ascii_set[(int)base[i]] = 1;
		i++;
	}
	return (1);
}

int	get_int_from_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg_mult;
	int	result;
	int	addition;

	neg_mult = 1;
	result = 0;
	addition = 1;
	if (!ft_check_base(base))
		return (0);
	while ((*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_mult *= -1;
		str++;
	}
	while (addition >= 0)
	{
		addition = get_int_from_char(*str, base);
		if (addition >= 0)
			result = result * ft_strlen(base) + addition;
		str++;
	}
	return (result * neg_mult);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "  		---+--+1234ab567";
	printf("str1: %s\n %d\n\n", str1, ft_atoi_base(str1, "0123456789"));
	str2 = "-65+48df15";
	printf("str2: %s\n %d\n\n", str2, ft_atoi_base(str2, "0123456789"));
	str3 = "   +-12ABFß/-#";
	printf("str3: %s\n %d\n\n", str3, ft_atoi_base(str3, "0123456789ABCDEF"));
	str4 = " 	-++++-abbaaabcd abbfsdg";
	printf("str4: %s\n %d\n\n", str4, ft_atoi_base(str4, "ab"));
	str5 = " 	-++++-01100012d abbfsdg";
	printf("str5: %s\n %d\n", str5, ft_atoi_base(str5, "01"));
	return (0);
}
*/
