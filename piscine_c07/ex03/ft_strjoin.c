/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:37:41 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/05 20:00:44 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void	ft_stitch(int p_size, char *p_result, char **p_strs, char *p_sep)
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	while (i < p_size)
	{
		if (i == 0)
		{
			while (p_strs[i][j] != '\0')
			{
				p_result[j] = p_strs[i][j];
				j++;
			}	
		}
		else
		{
			ft_strcat(p_result, p_strs[i]);
			
		}
		if (i < p_size - 1)
				ft_strcat(p_result, p_sep);
		i++;
	}
}
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_len;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char) * 1);
		//*result = '\0';
		return (result);
	}
	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += (size - 1) * ft_strlen(sep);
	printf("total_len: %d\n", total_len);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	
	//printf("sizeof(strs): %ld\n", sizeof(strs));
	//result = malloc(sizeof(strs));
	if (!result)
		return ((char *)0);
	//ft_stitch(size, result, strs, sep);!!!!!!!!!!!!
	int j;
	int k;
	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j] != '\0')
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	write(1, str, strlen);
}

int	main(void)
{
	char	*mystrs[10000];
	char	*megastring;
	char	*mysep;
	
	mystrs[0] = "This";
	mystrs[1] = "is";
	mystrs[2] = "a";
	mystrs[3] = "test";
	mystrs[4] = "for";
	mystrs[5] = "strjoin.";

	mysep = " - ";
	char *mystrs2[1];
	mystrs2[0] = "jlsfngjlsdfjlgnl";
	megastring = ft_strjoin(6, mystrs, mysep); 
	ft_putstr(megastring);
	free(megastring);
	return (0);
}
*/
