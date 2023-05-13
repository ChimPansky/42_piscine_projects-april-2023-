/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:47:04 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/22 19:04:33 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void write_pair(int p_num1, int p_num2)
{
	char my_str[7];
	
	my_str[0] = p_num1 / 10 + 48;
	my_str[1] = p_num1 % 10 + 48;
	my_str[2] = ' ';
	my_str[3] = p_num2 / 10 + 48;
	my_str[4] = p_num2 % 10 + 48;
	my_str[5] = ',';
	my_str[6] = ' ';
	if (p_num1 == 98 && p_num2 == 99)
		write(1, &my_str, 5);
	else
		write(1, &my_str, 7);
}

void ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			write_pair(num1, num2);
			num2++;
		}
		num1++;
	}
}
