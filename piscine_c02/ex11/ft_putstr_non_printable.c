/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/05/01 17:34:12 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

char	*ft_get_ascii_hex(char *dest, char c)
{	
	//int	c_ascii;
	int	first_hex_digit;
	int	second_hex_digit;

	//c_ascii = (int) c;
	first_hex_digit = c / 16;
	second_hex_digit = c % 16;
	dest[0] = '\\';
	dest[1] = first_hex_digit + 48;
	if (second_hex_digit > 9)
		dest[2] = second_hex_digit + 48 + 32 + 7;
	else
		dest[2] = second_hex_digit + 48;
	return (dest);
}

void	ft_putstr_non_printable(char *str)
{
	char	non_printable_str[3];

	while (*str != '\0')
	{
		if (ft_char_is_printable(*str))
			write(1, str, 1);
		else
			write(1, ft_get_ascii_hex(non_printable_str, *str), 3);
		str++;
	}
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	my_str[5];

	my_str[0] = 90;
	my_str[1] = 1;
	my_str[2] = 27;
	my_str[3] = 10;
	my_str[4] = 90;

	//printf("\nprintf of my_str: %s\n\n", my_str);
	
	//printf("ft_putstr of my_str:");
	ft_putstr_non_printable(my_str);
	printf("\n\n");
	
	char	*my_str2 = "Coucou\ntu vas bien ?";
	
	//printf("ft_putstr of my_str2:");
	ft_putstr_non_printable(my_str2);
	printf("\n\n");
	
	return (0);
}
*/
