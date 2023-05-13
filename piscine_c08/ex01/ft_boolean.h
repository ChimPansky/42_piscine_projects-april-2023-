#ifndef __FT_BOOLEAN_H__
# define __FT_BOOLEAN_H__

# include <unistd.h>

#define	EVEN_MSG "I have an even number of arguments.\n"
#define	ODD_MSG "I have an odd number of arguments.\n"

#define	SUCCESS 0

#define	TRUE	1
#define	FALSE	0

typedef	int	t_bool;

#define	EVEN(x)	x % 2 == 0 


#endif
