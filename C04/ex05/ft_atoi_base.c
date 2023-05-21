int	ft_char_isspace(char c)
{
	return ( (c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_char_get_ind_base(char c, char *base)
{
	int	ind;
	
	ind = 0;
	while (base[ind])
	{
		if (c == base[ind])
			return (ind);
		ind++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_base_valid(char *base)
{
	int	len;
	int	i;
	int	j;
	
	len = ft_strlen(base);
	
	i = 0;
	while (i < len - 1)
	{
		if (base[i] == '+' || base[i] == '-' || ft_char_isspace(base[i]))
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	neg_mult;
	int	base_len;
	int	addition;

	result = 0;
	i = 0;
	neg_mult = 1;
	base_len = ft_base_valid(base);
	if (base_len > 1)
	{
		while (ft_char_isspace(str[i]))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg_mult *= -1;
			i++;
		}
		while ((addition = ft_char_get_ind_base(str[i++], base)) >= 0)
			result = result * base_len + addition;
	}
	return (result * neg_mult);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	}
	else
		printf("Pls gief 2 Striengs.\n");
	return (0);
}
*/
