/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:12:38 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/29 12:22:37 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				cmp;
	unsigned int	i;

	cmp = 0;
	i = 0;
	while ((*s1 || *s2) && !cmp && i < n)
	{
		cmp = *s1 - *s2;
		s1++;
		s2++;
		i++;
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
	printf("strncmp: %d\n", strncmp(str1, str2, 2));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 2));
	str3 = "0 45sdf 	&";
	str4 = " as23 d 6";
	printf("strncmp: %d\n", strncmp(str3, str4, 100));
	printf("ft_strncmp: %d\n", ft_strncmp(str3, str4, 100));
	str5 = "ddw c";
	str6 = "ddw 	ä,gh ";
	printf("strncmp: %d\n", strncmp(str5, str6, 2));
	printf("ft_strncmp: %d\n", ft_strncmp(str5, str6, 2));
	str7 = "A123! ";
	str8 = "A123!";
	printf("strncmp: %d\n", strncmp(str7, str8, 6));
	printf("ft_strncmp: %d\n", ft_strncmp(str7, str8, 6));
}
*/
