int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (i);
	//return ((unsigned int)ft_strlen(src));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char	my_dest[10];
		unsigned int	len;
		//printf("%s\n",argv[1]);
		printf("ft_strlcpy...\n");
		len = ft_strlcpy(my_dest, argv[1], atoi(argv[2]));
		printf("%s\n", my_dest);
		printf("%d\n", len);

	}
	else
		printf("Please gief String and size\n");
	return (0);
}*/
