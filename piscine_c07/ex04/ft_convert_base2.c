


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_int_from_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_baselen(char *base)
{
	int	i;
	int	ascii_set[128];
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 1)
		return (0);
	while (i++ <= 128)
		ascii_set[i - 1] = 0;
	i = 0;
	while (i < base_len)
	{
		if (ascii_set[(int)base[i]] || base[i] == '-' || base [i] == '+')
			return (0);
		else
			ascii_set[(int)base[i]] = 1;
		i++;
	}
	return (base_len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg_mult;
	int	base_len;
	int	result;
	int	addition;

	neg_mult = 1;
	result = 0;
	addition = 1;
	base_len = ft_get_baselen(base);
	if (!base_len)
		return (0);
	while ((*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_mult *= -1;
		str++;
	}
	while (addition >= 0)
	{
		addition = get_int_from_char(*str, base);
		if (addition >= 0)
			result = result * base_len + addition;
		str++;
	}
	return (result * neg_mult);
}
