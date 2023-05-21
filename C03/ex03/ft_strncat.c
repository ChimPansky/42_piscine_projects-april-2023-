char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char my_dest1[15] = "Testing is";
		char my_dest2[15] = "Testing is";
		
		
		printf("ft_strncat(dest, src): %s\n", ft_strncat(my_dest2, argv[1], atoi(argv[2])));
		printf("strncat(dest, src): %s\n", strncat(my_dest1, argv[1], atoi(argv[2])));
	}
	else
		printf("Pls gief Strieng!\n");

	return (0);
}
*/
