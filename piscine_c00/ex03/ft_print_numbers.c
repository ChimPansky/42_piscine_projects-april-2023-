/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:27:32 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/20 14:38:04 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void){
	int i;
	int limit;
	char c;

	i = 48;
	limit = i + 10;

	while (i < limit)
	{
		c = i;
		write(1, &c, 1);
		i++;
	}
}

int	main()
{
	ft_print_numbers();
	return (0);
}
