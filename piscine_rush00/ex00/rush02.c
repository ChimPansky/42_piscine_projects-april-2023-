/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:48:27 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/22 13:23:41 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int rows, int cols)
{
	int		i;
	int		j;
	char	output;

	i = 1;
	while (i <= cols)
	{
		j = 1;
		while (j <= rows)
		{
			output = ' ';
			if (i == 1 || i == cols || j == 1 || j == rows)
			{
				output = 'B';
				if (i == cols && (j == 1 || j == rows))
					output = 'C';
				if (i == 1 && (j == 1 || j == rows))
					output = 'A';
			}
			ft_putchar(output);
			if (j == rows)
				ft_putchar('\n');
			j++;
		}
		i++;
	}
}
