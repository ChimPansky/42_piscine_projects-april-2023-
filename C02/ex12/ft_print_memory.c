#include <unistd.h>

typedef unsigned char BYTE;

void	ft_print_byte_hex(BYTE p_byte)
{
	int		msb;
	int		lsb;
	char	c;

	msb = (p_byte & 0b11110000) >> 4;
	lsb = (p_byte & 0b00001111);

	if (msb >= 10)
		c = 'a' - 10 + msb;
	else
		c = '0' + msb;
	write(1, &c, 1);
	if (lsb >= 10)
		c = 'a' - 10 + lsb;
	else
		c = '0' + lsb;
	write(1, &c, 1);
}

void	ft_print_address_hex(void *addr)
{
	BYTE *ptr_byte;
	int	i;

	ptr_byte = (BYTE *)&addr;
	i = 0;
	while (i < 8)
	{
		ft_print_byte_hex(*(ptr_byte + 7 - i));
		i++;
	}
	write(1, ": ", 2);
}

void	ft_pad_spaces(int gap)
{
	int	i;
	int	spaces;

	i = 0;
	if (gap > 0)
	{
		spaces = gap * 2 + (gap + 1) / 2;
		while (i < spaces)
		{
			write(1, " ", 1);
			i++;
		}
	}
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			my_str[16];
	
	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
			ft_print_address_hex(addr + i);
		if (ft_char_is_printable(*(char *)(addr + i)))
			my_str[i % 16] = *(char *)(addr + i);
		else
			my_str[i % 16] = '.';
		ft_print_byte_hex(*(BYTE *)(addr + i));
		if (i % 2 == 1)
			write(1, " ", 1);
		if (i % 16 == 15 || i == size - 1)
		{
			ft_pad_spaces(15 - (i % 16));
			write(1, my_str, (i % 16) + 1);
			write(1, "\n", 1);
		}
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		//printf("ft_print_memory...\n");
		ft_print_memory(argv[1], atoi(argv[2]));
	}
	else
		printf("Please gief Strieng and size of Strieng\n");
	return (0);

}
*/
