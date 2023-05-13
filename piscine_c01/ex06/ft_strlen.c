/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/25 10:48:44 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	char	*my_str;
	int		x_len;

	my_str = str;
	x_len = 0;
	while (*my_str != '\0')
	{
		x_len++;
		my_str++;
	}
	return (x_len);
}

int	main(void)
{
	char	*my_str;
	int		my_strlen;

	my_str = "Hellooooooo";
	my_strlen = ft_strlen(my_str);
	printf("str: %s\n", my_str);
	printf("stlen: %d\n", my_strlen);
	return (0);
}
