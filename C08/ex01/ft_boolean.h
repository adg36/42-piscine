#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

#define EVEN(nbr) (nbr % 2 == 0)
#define ODD_MSG "I have an odd number of arguments."
#define EVEN_MSG "I have an even number of arguments."
#define SUCCESS 0

typedef enum t_bool
{
	FALSE = 0, 
	TRUE = 1,
} t_bool;

#endif
