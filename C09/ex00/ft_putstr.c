//#include <unistd.h>
#include "ft_header.h"
//int	ft_strlen(char *str);

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
