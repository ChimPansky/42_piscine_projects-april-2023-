/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:53:43 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/29 15:40:33 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	while (str[i] != '\0' && !found)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			found = 1;
		else
			i++;
	}
	if (found)
		return (str + i);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*haystack = "aabcd%  t78u NEEDLEef";

	char	*needle = "NEEDL E";
	
	printf("ft_strstr haystack: %s\n", ft_strstr(haystack, needle));
	printf("strstr haystack: %s\n", strstr(haystack, needle));
	//printf("strncat: %s\n", strncat(buff, source, 5));
	return (0);
}
*/
