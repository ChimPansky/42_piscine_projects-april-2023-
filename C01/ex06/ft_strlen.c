int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[++len]);
	return(len);
}

/*
#include <stdio.h>
int main(void)
{
	printf("ft_strlen(\"abc\"): %d\n", ft_strlen("abc"));
	return (0);
}
*/
