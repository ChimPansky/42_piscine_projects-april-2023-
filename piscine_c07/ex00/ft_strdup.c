/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:13:50 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/03 20:45:15 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (src[i] != '\0')
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return ((char *) 0);
	else
	{
		j = 0;
		while (j <= i)
		{
			result[j] = src[j];
			j++;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	*my_src;
	char	*my_dup;

	my_src = "sldknlknsdlgn";
	my_dup = ft_strdup(my_src);
	printf("my_dup: %s\n", my_dup);
	return (0);
}
*/
