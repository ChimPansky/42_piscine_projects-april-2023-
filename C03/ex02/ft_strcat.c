char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
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
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char my_dest1[15] = "Testing is";
		char my_dest2[15] = "Testing is";
		
		
		printf("ft_strcmp(dest, src): %s\n", ft_strcat(my_dest2, argv[1]));
		printf("strcat(dest, src): %s\n", strcat(my_dest1, argv[1]));
	}
	else
		printf("Pls gief Strieng!\n");

	return (0);
}
*/
