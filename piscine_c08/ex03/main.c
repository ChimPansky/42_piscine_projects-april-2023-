#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>
int	main(void)
{
	t_point	my_point;
	printf("%d\n", my_point.x + my_point.y);

	set_point(&my_point);
	printf("%d\n", my_point.x + my_point.y);
	return (0);
}
