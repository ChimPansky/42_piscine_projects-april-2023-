char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{	
		printf("ft_strstr(haystack, needle): %s\n", ft_strstr(argv[1], argv[2]));
		printf("strstr(haystack, needle): %s\n", strstr(argv[1], argv[2]));
	}
	else
		printf("Pls gief 2 Striengs!\n");

	return (0);
}
*/
