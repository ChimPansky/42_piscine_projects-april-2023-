int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("asnlnlFDHfd"));
	printf("%d\n", ft_str_is_alpha("as5nlnlFDHfd"));
	printf("%d\n", ft_str_is_alpha("asn lnlFDHfd"));
	printf("%d\n", ft_str_is_alpha("asnlnÜlFDHfd"));

	return (0);
}
*/
