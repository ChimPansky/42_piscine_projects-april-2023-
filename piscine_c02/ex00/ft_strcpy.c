/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:00:25 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 12:03:20 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i > -1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			i = -1;
		else
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

	my_src = "abcdefghij";

	printf("my_dest: %s\n", my_dest);
	printf("my_src: %s\n", my_src);

	strcpy(my_dest, my_src);
	printf("Output of strcpy: %s\n", my_dest);
	printf("Strlen of output: %ld\n", strlen(my_dest));


	char my_ft_dest[20];
	char *my_ft_src;
	my_ft_src = "abcdefghij";
	printf("my_ft_dest: %s\n", my_ft_dest);
	printf("my_ft_src: %s\n", my_ft_src);
	ft_strcpy(my_ft_dest, my_ft_src);
	printf("Output of ft_strcpy: %s\n", my_ft_dest);
	printf("Strlen of output: %ld\n", strlen(my_ft_dest));
}
*/
