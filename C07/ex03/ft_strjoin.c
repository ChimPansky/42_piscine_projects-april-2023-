#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	total_len;
	char *result;

	total_len = 0;
	i = -1;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	if (size <= 0)
		total_len = 0;
	else
		total_len += (size - 1) * ft_strlen(sep);
	if (!(result = malloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	i = -1;
	k = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			result[++k] = strs[i][j];
		if (k == total_len - 1)
			result[++k] = '\0';
		else
		{
			j = -1;
			while(sep[++j])
				result[++k] = sep[j];
		}
	}
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		char *my_result;
		int	my_size;
		char *input[4];
		char *my_sep;

		my_size = 4;
		input[0] = argv[0];
		input[1] = "Hello";
		input[2] = "Dear";
		input[3] = "World";
		my_sep = "---";
		//input = (char **)malloc(100000);
		my_result = ft_strjoin(my_size, input, my_sep);
		printf("ft_strjoin(): %s\n", my_result);
		free(my_result);
	}
	else
	{
		printf("Please enter how many Strings you want to join followed by the Strings followed by the separator-String.\n");
		printf("Example input: 3 Hello Dear World ---");
	}	
	return (0);
}
*/
