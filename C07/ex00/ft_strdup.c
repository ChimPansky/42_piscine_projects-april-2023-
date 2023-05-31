#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!result)
		return (0);
	i = -1;
	while(src[++i])
		result[i] = src[i];
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("ft_strdup(%s): %s", argv[1], ft_strdup(argv[1]));
	else
		printf("Please gief String.\n");
	return (0);
}
*/
