int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] -= 32;
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
		printf("ft_strupcase...\n");
		printf("%s\n",ft_strupcase(argv[1]));

	}
	else
		printf("Please gief String\n");
	return (0);
}
*/
