/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:54:09 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/21 12:33:42 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	int		limit;
	char	c;

	i = 97;
	limit = i + 26;
	while (i < limit)
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
