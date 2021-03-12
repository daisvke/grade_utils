#include "header.h"

void	ft_avg(int courses)
{
	float	grades_sum;
	float	coef_sum;
	int		i;
	
	i = 0;
	while (i < courses) 
	{
		ft_putgrade(i);
		pf("-----------\n");
		ft_putcoef(i);
		pf("\n");
		i++;
	}
	ft_firstline();
	i = 0;
	grades_sum = 0;
	coef_sum = 0;
	while (i < courses)
	{
		g_grades[i]->final_grad = g_grades[i]->grad * g_grades[i]->coef;
		coef_sum += g_grades[i]->coef;
		grades_sum += g_grades[i]->final_grad;
		ft_midline(i);
		i++;
	}
	ft_lastline(coef_sum, grades_sum);
}
