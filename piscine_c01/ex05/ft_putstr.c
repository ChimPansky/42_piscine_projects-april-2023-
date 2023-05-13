/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/25 10:31:59 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*mystr;

	mystr = str;
	while (*mystr != '\0')
	{
		write(1, mystr, 1);
		mystr++;
	}
}

int	main(void)
{
	char	*my_str;

	my_str = "Hello";
	ft_putstr(my_str);
	return (0);
}
