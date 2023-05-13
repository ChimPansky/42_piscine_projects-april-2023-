/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:55:44 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/29 12:26:46 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*my_dest;
	unsigned int	i;

	my_dest = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i++ < nb)
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
	char	buff[10] = "abc";
	char	buff2[10] = "abc";
	char	*source = "defghijklmnopqrstuvw";
	
	printf("ft_strncat: %s\n", ft_strncat(buff, source, 10));
	printf("strncat: %s\n", strncat(buff2, source, 10));
	return (0);
}
*/
