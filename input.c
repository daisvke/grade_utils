#include "header.h"

void	ft_putgrade(int i)
{
	int		first;
	int		is_valid;

	first = 1;
	is_valid = 0;
	while (!is_valid)
	{
		if (!first)
			pf("\nPlease enter a valid number\n\n");
		first = 0;
		printf("Grade %d: ", i + 1);
		if (scanf("%f", &g_grades[i]->grad))
			is_valid = 1;
		else
			ft_cleanbuf();
	}
}

void	ft_putcoef(int i)
{
	int		first;
	int		is_valid;

	first = 1;
	is_valid = 0;
	while (!is_valid)
	{
		if (!first)
			pf("\nPlease enter a valid number\n\n");
		first = 0;
		printf("Coef %d: ", i + 1);
		if (scanf("%f", &g_grades[i]->coef))
			is_valid = 1;
		else
			ft_cleanbuf();
	}
}
