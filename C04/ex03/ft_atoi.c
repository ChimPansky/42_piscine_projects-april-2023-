int	ft_char_isspace(char c)
{
	return ( (c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_char_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	neg_mult;

	result = 0;
	i = 0;
	neg_mult = 1;
	while (ft_char_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg_mult *= -1;
		i++;
	}
	while (ft_char_isnumeric(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * neg_mult);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	else
		printf("Pls gief Strieng.\n");
	return (0);
}
*/
