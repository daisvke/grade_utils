#include "header.h"

void	ft_cleanbuf(void)
{
	char	c;

	do 
	{
        scanf("%c",&c);
	}
	while(c != '\n');
}
