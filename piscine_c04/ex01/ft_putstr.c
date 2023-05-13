/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:47:24 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 09:48:10 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	write (1, str, strlen);
}
/*
int	main(void)
{
	char *mystr = "kmklhkl";
	ft_putstr("asdnfjnjnkj");
	ft_putstr(mystr);
	return (0);
}
*/
