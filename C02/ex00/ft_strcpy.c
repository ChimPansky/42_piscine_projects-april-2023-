char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char mydest[6];
	char *mystr = "01234";

	ft_strcpy(mydest, mystr);
	printf("%s\n", mydest);
	return (0);
}
*/
