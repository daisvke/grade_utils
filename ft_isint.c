#include "header.h"

int	ft_isint(char *s)
{
	while (*s)
		if (!ft_isdigit(*s++))
			return (0);
	return (1);
}
