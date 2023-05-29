#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_strings(char *strings[], int size)
{
	int i;
	int j;
	char *curr;

	i = 1;

	while (i < size)
	{
		curr = strings[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(curr, strings[j]) < 0)
		{
			strings[j+1] = strings[j];
			j--;
		}
		strings[j+1] = curr;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	i;

		argv[0] = "";
		ft_sort_strings(argv, argc);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			write(1, "\n", 1);
		}
	}
	return (0);
}
