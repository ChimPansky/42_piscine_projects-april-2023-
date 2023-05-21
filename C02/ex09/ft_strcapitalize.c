int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i])
	{
		if (!word_start && ft_char_is_uppercase(str[i]))
			str[i] += 32;
		if (ft_char_is_lowercase(str[i]) || ft_char_is_uppercase(str[i]) || ft_char_is_numeric(str[i]))
		{
			if (word_start && ft_char_is_lowercase(str[i]))
				str[i] -= 32;
			word_start = 0;
		}
		else
			word_start = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n",argv[1]);
		printf("ft_strcapitalize...\n");
		printf("%s\n",ft_strcapitalize(argv[1]));

	}
	else
		printf("Please gief String\n");
	return (0);
}
*/
