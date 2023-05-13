//#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (src[i] != '\0')
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return ((char *) 0);
	else
	{
		j = 0;
		while (j <= i)
		{
			result[j] = src[j];
			j++;
		}
		return (result);
	}
}

void	set_stock_str(struct s_stock_str *p_stock_str, char *p_string)
{
	p_stock_str->str = ft_strdup(p_string);
	p_stock_str->copy = ft_strdup(p_string);
	p_stock_str->size = ft_strlen(p_stock_str->str);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*mystrs;
	int	i;
	
	i = 0;
	mystrs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!mystrs)
		return (0);
	while (i < ac)
	{
		set_stock_str(&mystrs[i], av[i]);
		i++;
	}
	mystrs[i].str = 0;
	return (mystrs);
}



/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		t_stock_str *my_t_stock;

		my_t_stock = ft_strs_to_tab(argc, argv);
		
		int i = 0;
		while (my_t_stock->str)
		{
			printf("%s\n", my_t_stock->str);
			printf("%s\n", my_t_stock->copy);
			printf("%d\n", my_t_stock->size);
			my_t_stock++;
		}
	}

	return (0);
}
*/
