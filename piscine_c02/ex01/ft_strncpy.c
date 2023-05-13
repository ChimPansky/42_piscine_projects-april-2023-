/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:03:37 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 12:16:09 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < n)
	{	
		if (i >= src_len)
			dest[i] = '\0';
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
	char my_dest[20];
	char *my_src;

	my_src = "abcdefghijklmnopqrst";

	//printf("my_dest: %s\n", my_dest);
	printf("\nmy_src: %s\n", my_src);

	strncpy(my_dest, my_src, 10);
	printf("Output of strncpy: %s\n", my_dest);
	//printf("strlen of output: %ld\n", strlen(my_dest));
	printf("ft_strlen of output: %d\n\n", ft_strlen(my_dest));


	char my_ft_dest[20];
	char *my_ft_src;

	my_ft_src = "abcdefghijklmnopqrst";

	//printf("my_ft_dest: %s\n", my_ft_dest);
	printf("my_ft_src: %s\n", my_ft_src);
	
	ft_strncpy(my_ft_dest, my_ft_src, 10);
	printf("Output of ft_strncpy: %s\n", my_ft_dest);
	//printf("strlen of output: %ld\n", strlen(my_ft_dest));
	printf("ft_strlen of output: %d\n", ft_strlen(my_ft_dest));

	char my_dest2[20];
	char *my_src2;
	my_src2 = "Hello";

	//printf("my_dest: %s\n", my_dest);
	printf("\nmy_src: %s\n", my_src2);

	strncpy(my_dest2, my_src2, 10);
	printf("Output of strncpy: %s\n", my_dest2);
	//printf("strlen of output: %ld\n", strlen(my_dest));
	printf("ft_strlen of output: %d\n\n", ft_strlen(my_dest2));


	char my_ft_dest2[20];
	char *my_ft_src2;

	my_ft_src2 = "Hello";

	//printf("my_ft_dest: %s\n", my_ft_dest);
	printf("my_ft_src2: %s\n", my_ft_src2);
	
	ft_strncpy(my_ft_dest2, my_ft_src2, 10);
	printf("Output of ft_strncpy: %s\n", my_ft_dest2);
	//printf("strlen of output: %ld\n", strlen(my_ft_dest));
	printf("ft_strlen of output: %d\n", ft_strlen(my_ft_dest2));

	return (0);
}
*/