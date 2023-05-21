int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_uppercase(str[i]))
			str[i] += 32;
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
		printf("ft_strlowcase...\n");
		printf("%s\n",ft_strlowcase(argv[1]));

	}
	else
		printf("Please gief String\n");
	return (0);
}
*/
