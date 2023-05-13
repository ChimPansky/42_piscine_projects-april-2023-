int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_words(char *str, char *sep)
{
	int	counter;
	int	i;
	int	j;
	int	start;

	counter = 0;
	i = 0;
	j = 0;
	start = 1;
	while (str[i])
	{
		j = 0;
		while ((j < strlen(sep)) && !start)
		{
			if (str[i] == sep[j]
				start = 1;
			else
				start = 0;
			j++;
		}
		if (start &&
		
		i++;


	}

}
