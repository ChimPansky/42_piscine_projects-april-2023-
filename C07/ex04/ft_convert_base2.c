int	ft_base_valid(char *base);

int	ft_char_isspace(char c)
{
	return ( (c >= '\t' && c <= '\r') || c == ' ');
}

void	ft_save_nbr_base(char *target, int target_len, int nbr, char *base)
{
	int		i;
	long	nr;
	int		baselen;
	int		isneg;
		
	nr = nbr;
	baselen = ft_base_valid(base);
	isneg = 0;
	if (nr < 0)
	{
		isneg = 1;
		target[0] = '-';
		nr *= -1;
	}
	i = 0;
	while (i < target_len - isneg)
	{
		target[target_len - 1 - i] = base[nr % baselen];
		nr /= baselen;
		i++;
	}
	target[target_len] = '\0';
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

