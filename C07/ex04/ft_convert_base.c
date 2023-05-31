#include <stdlib.h>

void	ft_save_nbr_base(char *target, int target_len, int nbr, char *base);
int		ft_strlen(char *str);
int		ft_char_isspace(char c);

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

int	ft_base_valid(char *base)
{
	int	len;
	int	i;
	int	j;
	
	len = ft_strlen(base);
	
	i = 0;
	while (i < len)
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	from_baselen;
	int	to_baselen;
	int	nb;
	char *result;
	int	new_len;
	
	from_baselen = ft_base_valid(base_from);
	to_baselen = ft_base_valid(base_to);
	if (!from_baselen || !to_baselen)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	new_len = 0 + (nb < 0);
	while (nb != 0 || !new_len)
	{
		nb /= to_baselen;
		new_len++;
	}
	if (!(result = malloc(sizeof(char) * (new_len + 1))))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	ft_save_nbr_base(result, new_len, nb, base_to);
	return (result);	
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("ft_convert_base(): %s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	else
		printf("Pls Enter Parameters for ft_convert_base(char *nbr, char *base_from, char *base_to)\n");
	return (0);
}
*/
