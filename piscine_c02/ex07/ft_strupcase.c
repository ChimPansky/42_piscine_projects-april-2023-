/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:11:46 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 14:49:35 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_char_is_lower(c))
			str[i] = c - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	
	char my_str1 [] = "abcdefghijklmnopqrst";
	char my_str2 [] = "sdh1f053t";
	//char my_str2[0] = '\x1a';
	//my_str2[1] = 'x';
	char my_str3 [] = "-+34dfg";
	char my_str4 [] = "a";
	//my_str4[1] = '\x01';
	//my_str4[2] = '1';
	char my_str5 [] = "FJVB1D";
	char my_str6 [] = "ASDhjghDs";

	printf("my_str1: %s\n", my_str1);
	printf("upcase: %s\n", ft_strupcase(my_str1));
	printf("my_str2: %s\n", my_str2);
	printf("upcase: %s\n", ft_strupcase(my_str2));
	printf("my_str3: %s\n", my_str3);
	printf("upcase: %s\n", ft_strupcase(my_str3));
	printf("my_str4: %s\n", my_str4);
	printf("upcase: %s\n", ft_strupcase(my_str4));
	printf("my_str5: %s\n", my_str5);
	printf("upcase: %s\n", ft_strupcase(my_str5));
	printf("my_str6: %s\n", my_str6);
	printf("upcase: %s\n", ft_strupcase(my_str6));
}
*/
