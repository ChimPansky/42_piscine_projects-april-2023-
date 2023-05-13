/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:51:35 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/02 11:59:11 by tkasbari         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	i;

	if (argc >= 1)
	{
		i = argc;
		while (i > 1)
		{
			ft_putstr(argv[i - 1]);
			ft_putstr("\n");
			i--;
		}
	}
}
