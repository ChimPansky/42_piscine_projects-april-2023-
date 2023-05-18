#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find_char(char *haystack, char needle)
{
	int	i;
	
	i = 0;
	while(haystack[i])
	{
		if (haystack[i++] == needle)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	counter;
	int	i;
	int	bow;
	
	counter = 0;
	i = 0;
	bow = 1;
	while (str[i])
	{
		if (ft_find_char(sep, str[i]))
			bow = 1;
		else
			if (bow)
			{
				counter++;
				bow = 0;
			}
		i++;
	}
	return (counter);
}

char	*ft_create_word(char *str, int start, char *charset)
{
	int		i;
	int		len;
	char	*result;
	
	i = 0;
	len = 0;
	while (str[start + len] && !ft_find_char(charset, str[start + len]))
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	while (i < len)
	{
		result[i] = str[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr_split;
	int	i;
	int	index;
	
	i = 0;	
	index = 0;
	arr_split = (char **)malloc(sizeof(char **) * (ft_count_words(str, charset) + 1));
	if (!arr_split)
		return (0);
	while (i < ft_count_words(str, charset))
	{
		while (str[index] && ft_find_char(charset, str[index]))
			index++;
		arr_split[i] = ft_create_word(str, index, charset);
		if (!arr_split[i])
			return (0);
		index += ft_strlen(arr_split[i]);
		i++;
	}
	arr_split[i] = 0;
	
	return (arr_split);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char **splitted;
	int	i;
	
	if (argc == 3)
	{
		printf("String: %s\n", argv[1]);
		printf("Separator Charset: %s\n\n", argv[2]);
		i = 0;
		splitted = ft_split(argv[1], argv[2]);
		while (splitted[i])
		{
				printf("%s\n", splitted[i]);
				i++;
		}
	}
	return (0);
}
*/
