/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:11:46 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 16:54:19 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_up(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_c_is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_c_is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i > 0 && ft_c_is_up(str[i]) && ft_c_is_alphanum(str[i - 1]))
			str[i] += 32;
		if (ft_c_is_low(str[i]))
		{
			if (i == 0 || (i > 0 && !ft_c_is_alphanum(str[i - 1])))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char my_str1 [] = "salut, comment tu vas ? 42mots 
	//quarante	-deux; cinquante+et+un";
	char my_str2 [] = "humuhumunukunukuapuaa";
	char my_str3 [] = "a sandwich walks 	into a  bar...";
	char my_str4 [] = "there's a problem";
	char my_str5 [] = ".sam, why did you eat aLL the lembas-bread?";
	char my_str6 [] = "nO, gRANDMA1 i dON'T wANT aNOTHER pIECE oF sACHERTORTE1";

	printf("my_str1: %s\n", my_str1);
	printf("capitalized: %s\n\n", ft_strcapitalize(my_str1));
	printf("my_str2: %s\n", my_str2);
	printf("capitalized: %s\n\n", ft_strcapitalize(my_str2));
	printf("my_str3: %s\n", my_str3);
	printf("capitalized: %s\n\n", ft_strcapitalize(my_str3));
	printf("my_str4: %s\n", my_str4);
	printf("capitalized: %s\n\n", ft_strcapitalize(my_str4));
	printf("my_str5: %s\n", my_str5);
	printf("capitalized: %s\n\n", ft_strcapitalize(my_str5));
	printf("my_str6: %s\n", my_str6);
	printf("capitalized: %s\n\n", ft_strcapitalize(my_str6));
}
*/
