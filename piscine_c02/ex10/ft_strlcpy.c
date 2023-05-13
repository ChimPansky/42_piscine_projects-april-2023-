/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:54:52 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 17:35:45 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i <= src_len)
	{
		if (i == size - 1 || i == src_len)
		{
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	
	char my_dest[6];
	char *my_src;

	my_src = "abcdef";

	//printf("my_dest: %s\n", my_dest);
	printf("\nmy_src: %s\n", my_src);

	strlcpy(my_dest, my_src, 6);
	printf("Output of strlcpy: %s\n", my_dest);
	//printf("strlen of output: %ld\n", strlen(my_dest));
	printf("ft_strlen of output: %d\n\n", ft_strlen(my_dest));

	char my_ft_dest[6];
	char *my_ft_src;

	my_ft_src = "abcdef";

	//printf("my_ft_dest: %s\n", my_ft_dest);
	printf("\nmy_ft_src: %s\n", my_ft_src);
	
	ft_strlcpy(my_ft_dest, my_ft_src, 6);
	printf("Output of ft_strlcpy: %s\n", my_ft_dest);
	//printf("strlen of output: %ld\n", strlen(my_ft_dest));
	printf("ft_strlen of output: %d\n\n", ft_strlen(my_ft_dest));
	return (0);
}
*/
