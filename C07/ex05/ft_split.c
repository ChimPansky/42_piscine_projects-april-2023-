#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_in_str(char *haystack, char needle);
int		ft_count_words(char *str, char *seps);
char	*ft_create_word(char *str, char *charset, int index);
char	**ft_split(char *str, char *charset);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

int ft_in_str(char *haystack, char needle)
{
	int	i;
	
	i = -1;
	while(haystack[++i])
	{
		if (haystack[i] == needle)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *seps)
{
	int	count;
	int	i;
	int	start;
	
	i = -1;
	count = 0;
	start = 1;
	while (str[++i])
	{
		if (ft_in_str(seps, str[i]))
			start = 1;
		else
		{
			if (start)
				count++;
			start = 0;
		}
	}
	return (count);
}

char	*ft_create_word(char *str, char *charset, int index)
{
	int	i;
	int	len;
	char *word;
	
	i = index;
	len = 0;
	while (str[i] && !ft_in_str(charset, str[i]))
	{
		len++;
		i++;
	}
	if (!(word = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = -1;
	while (++i < len)
		word[i] = str[index + i];
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str, char *charset)
{
	char **result;
	int		words;
	int		i;
	int		j;
	
	words = ft_count_words(str, charset);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (0);
	i = -1;
	j = 0;
	while(++i < words)
	{
		while(ft_in_str(charset, str[j]))
			j++;
		if (!((result[i] = ft_create_word(str, charset, j))))
		{
			while (i > 0)
			{
				if (result[--i])
					free(result[i]);
			}
			free(result);
			return (0);
		}
		j += ft_strlen(result[i]);
	}
	result[i] = 0;	
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char **my_split;
		int	i;
		
		my_split = ft_split(argv[1], argv[2]);
		
		
		if (my_split)
		{
			printf("sizeof(ft_split(%s, %s)): %ld\n", argv[1], argv[2], sizeof(my_split));
			i = -1;
			while(my_split[++i])
			{
				printf("my_split[%d]: %s\n", i, my_split[i]);
				free(my_split[i]);
			}
			free(my_split);
		}
		//printf("ft_count_words(%s, %s): %d\n", argv[1], argv[2], ft_count_words(argv[1], argv[2]));
		//printf("ft_in_str(%s, %c): %d\n", argv[1], argv[2][0], ft_in_str(argv[1], argv[2][0]));
	}
	else
	{
		printf("Please enter arguments for ft_split(char *str, char *charset):\n");
	}
	return (0);
}
*/
