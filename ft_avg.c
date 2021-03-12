#include "header.h"

void	ft_avg(void)
{
	float	grades_sum;
	float	coef_sum;
	int		i;
	
	ft_firstline();
	i = 0;
	grades_sum = 0;
	coef_sum = 0;
	while (i < g_grd_nb)
	{
		g_grades[i]->final_grad = g_grades[i]->grad * g_grades[i]->coef;
		coef_sum += g_grades[i]->coef;
		grades_sum += g_grades[i]->final_grad;
		ft_midline(i);
		i++;
	}
	ft_lastline(coef_sum, grades_sum);
}

void	ft_run_avg(void)
{
	int	keep;

	ft_intro();
	ft_fill_tab();
	keep = 1;
	while (keep)
	{
		ft_avg();
		keep = ft_modify_grd();
	}
}
