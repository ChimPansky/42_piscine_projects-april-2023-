int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		//if (!((str[i] >= 9 && str[i] <= 13) || (str[i] >= 32 && str[i] <= 126)))
		if (!((str[i] >= 32 && str[i] <= 126)))
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
