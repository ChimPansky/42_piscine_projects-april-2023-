char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char mydest[6];
	char *mystr = "01234";

	ft_strncpy(mydest, mystr, 4);
	printf("%s\n", mydest);
	return (0);
}
*/
