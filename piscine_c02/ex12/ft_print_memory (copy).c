/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkasbari <tkasbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:42:26 by tkasbari          #+#    #+#             */
/*   Updated: 2023/04/25 10:31:59 by tkasbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

char	*ft_get_ascii_hex(char *dest, char c)
{	
	int	c_ascii;
	int	first_hex_digit;
	int	second_hex_digit;
	
	c_ascii = (int) c;
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	//char	*addr_str = (char*) addr;
	unsigned int lines = size / 16;
	
	long	addr_long = (long) addr;
	printf("addr_long: %ld\n", addr_long);
	//write(1, addr_str, 20);
	/*write(1, my_addr, 20);
	write(1, "\n", 1);
	printf("%s\n", my_addr);
	printf("%d\n", my_addr[0]);
	printf("%d\n", my_addr[1]);
	printf("%d\n", my_addr[2]);
	printf("%d\n", my_addr[3]);
	printf("%d\n", my_addr[4]);
	printf("%d\n", my_addr[5]);
	printf("%d\n", my_addr[6]);
	printf("%d\n", my_addr[7]);
	printf("%d\n", my_addr[8]);
	printf("%d\n", my_addr[9]);
	printf("%d\n", my_addr[10]);
	printf("%d\n", my_addr[11]);
	printf("%d\n", my_addr[12]);
	//ft_putnbr(*addr);
	*/
	return (0);
}

int	main(void)
{
	char	*my_str2 = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";

	ft_print_memory(&my_str2, sizeof(my_str2));
	
	return (0);
}
