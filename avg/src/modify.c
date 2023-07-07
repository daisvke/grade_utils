#include "avg.h"

int	ft_is_valid_grd_nb(int n)
{
	return (n >= 1 && n <= g_grd_nb);
}

int	ft_choose_grd(void)
{
	int	first;
	int	is_valid;
	int	i;

	pf("What is to be modified ?\n");
	pf("ex: type '1' to modify grade 1/coef 1\n");
	first = 1;
	is_valid = 0;
	while (!is_valid)
	{
		ft_cleanbuf();
		if (!first)
			pf("\nPlease enter a valid number\n\n");
		first = 0;
		if (scanf("%d", &i) \
			&& ft_is_valid_grd_nb(i))
			is_valid = 1;
	}
	return (i - 1);
}

int	ft_modify_grd(void)
{
	int		first;
	int		is_valid;
	char	c;

	pf("Do you want to modify any grade ? y/n ");
	first = 1;
	is_valid = 0;
	while (!is_valid)
	{
		ft_cleanbuf();
		if (!first)
			pf("\nPlease enter 'y' or 'n'\n\n");
		first = 0;
		if (scanf("%c", &c) && (c == 'y' || c == 'n'))
			is_valid = 1;
	}
	if (c == 'n')
		return (0);
	ft_put_grd_coef(ft_choose_grd());
	return (1);
}
