#include "avg.h"

void	ft_putgrade(int i)
{
	int		first;
	int		is_valid;

	first = 1;
	is_valid = 0;
	while (!is_valid)
	{
		ft_cleanbuf();
		if (!first)
			pf("\nPlease enter a valid number\n\n");
		first = 0;
		printf("Grade %d: ", i + 1);
		if (scanf("%f", &g_grades[i]->grad) && g_grades[i]->grad >= 0)
			is_valid = 1;
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
		ft_cleanbuf();
		if (!first)
			pf("\nPlease enter a valid number\n\n");
		first = 0;
		printf("Coef %d: ", i + 1);
		if (scanf("%f", &g_grades[i]->coef) && g_grades[i]->coef >= 0)
			is_valid = 1;
	}
}

void	ft_putlabel(int i)
{
	char	s[100];

	printf("label %d: ", i + 1);
	scanf("%s", s);
	ft_strncpy(g_grades[i]->label, s, 6);
	ft_stoupper(g_grades[i]->label);
}

void	ft_put_grd_coef(int i)
{
	ft_putlabel(i);
	pf("-----------\n");
	ft_putgrade(i);
	pf("-----------\n");
	ft_putcoef(i);
	pf("\n");
}

void	ft_fill_tab(void)
{
	int	i;

	i = 0;
	while (i < g_grd_nb)
		ft_put_grd_coef(i++);
}

