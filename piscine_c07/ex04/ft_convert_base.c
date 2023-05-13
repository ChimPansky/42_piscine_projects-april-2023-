#include <unistd.h>

int	ft_get_baselen(char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	char	*result;

	base_len = ft_get_baselen(base);
	if (!base_len)
		return (char()0);

	
	
	return (result);
}

char	ft_transform_int(int nr, char *target_base)
{
	int		base_l;
	int		is_neg;
	int		i;
	char	result[32];	

	i = 0;
	is_neg = (nr < 0);
	base_l = ft_strlen(target_base);
	if (is_neg)
		result[i++] = '-';
	while (nr != 0)
	{
		result[base_l - 1 - i] = nr % base_l
		!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		
		

	
	
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int 	nbr_from;
	int		base_len_to;
	char	*nbr_to;

	nbr_from = ft_atoi_base(nbr, base_from);
	if (!nbr_from)
		return nbr_from;
	base_len_to = ft_get_baselen(base_to);
	if (!base_len_to)
		return base_len_to;

	nbr_to = (char *)malloc(sizeof(char) * (32 + 1));
	if (!nbr_to)
		return (0);
	
!!!!!!!!!!!!!!!!
	

	nbr_to = ft_itoa_base(nbr_from, base_to);

	if (!nbr_to)
		return 0;
	
	return (nbr_to);
}

int	main(void)
{
	ft_print_sth();
	return(0);
}
