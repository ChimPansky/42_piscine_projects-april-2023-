#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_print_hex(char c)
{
	int	digit;
	char	my_c;
	
	ft_putchar('\\');
	my_c = (c / 16) + '0';		
	ft_putchar(my_c);
	digit = c % 16;
	if (digit > 9)
		my_c = 'a' - 10 + digit;
	else
		my_c = digit + '0';		
	ft_putchar(my_c);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_printable(str[i]))
			ft_print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n",argv[1]);
		printf("ft_putstr_non_printable...\n");
		ft_putstr_non_printable(argv[1]);
		printf("\n");
	}
	else
		printf("Please gief String\n");
	return (0);
}
*/
