int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("strcmp(s1, s2): %d\n", strcmp(argv[1], argv[2]));
		printf("ft_strcmp(s1, s2): %d\n", ft_strcmp(argv[1], argv[2]));
	}
	else
		printf("Pls gief 2 Striengs!\n");

	return (0);
}
*/
