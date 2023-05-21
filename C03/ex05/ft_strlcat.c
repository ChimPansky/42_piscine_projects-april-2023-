int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
		
	i = 0;
	j = 0;
	destlen = (unsigned int)ft_strlen(dest);
	while (dest[i] && i < size - 1)
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	
	return (destlen + (unsigned int)ft_strlen(src));
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
		
		
		printf("ft_strlcat(dest[15], src, size): %d\n", ft_strlcat(my_dest1, argv[1], atoi(argv[2])));
		printf("dest: %s\n", my_dest1);
	}
	else
		printf("Pls gief Strieng and size of dest!\n");

	return (0);
}
*/
