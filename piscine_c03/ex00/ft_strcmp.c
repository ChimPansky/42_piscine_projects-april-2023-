/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:14:48 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/29 12:21:40 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = 0;
	while ((*s1 || *s2) && !cmp)
	{
		cmp = *s1 - *s2;
		s1++;
		s2++;
	}
	return (cmp);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;
	char	*str7;
	char	*str8;

	str1 = "abc";
	str2 = "axc";
	printf("strcmp: %d\n", strcmp(str1, str2));
	printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
	str3 = "0 45sdf 	&";
	str4 = " as23 d 6";
	printf("strcmp: %d\n", strcmp(str3, str4));
	printf("ft_strcmp: %d\n", ft_strcmp(str3, str4));
	str5 = "ddw c";
	str6 = "ddw 	ä,gh ";
	printf("strcmp: %d\n", strcmp(str5, str6));
	printf("ft_s4rcmp: %d\n", ft_strcmp(str5, str6));
	str7 = "A123! ";
	str8 = "A123! ";
	printf("strcmp: %d\n", strcmp(str7, str8));
	printf("ft_strcmp: %d\n", ft_strcmp(str7, str8));
}
*/
