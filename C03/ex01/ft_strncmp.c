int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while ((s1[i] || s2[i]) && !cmp && i < n)
	{
		cmp = s1[i] - s2[i];
		i++;
	}
	return (cmp);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("strncmp(s1, s2): %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
		printf("ft_strncmp(s1, s2): %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	else
		printf("Pls gief 2 Striengs and n!\n");

	return (0);
}
*/
