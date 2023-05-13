/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:08:53 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/29 12:27:16 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*my_dest;

	my_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (my_dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	buff[30] = "abc";
	char	buff2[30] = "abc";

	char	*source = "defghijklmn";
	
	printf("ft_strcat: %s\n", ft_strcat(buff, source));
	printf("strcat: %s\n", strcat(buff2, source));
}
*/
