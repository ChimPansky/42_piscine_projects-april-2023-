#include <unistd.h>
#include <stdio.h>

typedef unsigned char	byte_t;
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_print_hex(byte_t p_byte);
void	ft_print_address(void *addr);
void	*ft_print_memory(void *addr, unsigned int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while(*(str + ++len));
	return (len);
}

void	ft_print_hex(byte_t p_byte)
{
	int	msb;;
	int	lsb;
	char	c;

	msb = (int) (p_byte & 0b11110000 >> 4);
	printf("\np_byte: %d\n", p_byte);
	if (msb > 9)
		c = 'a' - 10 + msb;
	else
		c = '0' + msb;

	write(1, &c, 1);

	lsb = (int) (p_byte & 0b00001111);

	if (lsb > 9)
		c = 'a' - 10 + lsb;
	else
		c = '0' + lsb;

	write(1, &c, 1);
}

void	ft_print_address(void *addr)
{
	byte_t	*byteptr;
	int	i;

	byteptr = (byte_t *)&addr;
	i = 0;

	while (i < 8)
	{
		ft_print_hex(byteptr[8 - i - 1]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	printf("printf: %p\n", addr);
	ft_print_address(addr);

}

#include <stdio.h>
int	main(void)
{
	char	*str1;

	str1 = "Test String";
	printf("strlen: %d\n", ft_strlen(str1));
	ft_putchar(*str1);
	ft_putchar('\n');
	ft_putstr(str1);
	ft_putchar('\n');
	
	ft_print_memory((void *)str1, ft_strlen(str1));
	
	return (0);
}
