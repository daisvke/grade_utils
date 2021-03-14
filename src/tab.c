#include "header.h"

void	ft_firstline(void)
{
	pf("\n");
	pf("+----+--------+------+------+------------+\n");
	pf("| No.|  label | Grad | Coef | Final Grad |\n");
	pf("+----+---------------+------+------------+\n");
}

void	ft_midline(int i)
{
	printf("| %2d | %-7s|%5.1f |%5.1f |%11.1f |\n", \
			i + 1, \
			g_grades[i]->label, \
			g_grades[i]->grad, \
			g_grades[i]->coef, \
			g_grades[i]->final_grad);
	pf("+----+--------+------+------+------------+\n");
}

void	ft_lastline(float coef_sum, float grades_sum)
{
	int	w;

	w = 14;
	printf("\n%*c+------+------+------------+\n", w, ' ');
	printf("%*c| Tot. |%5.1f |%11.1f |\n", w, ' ', coef_sum, grades_sum);
	printf("%*c+------+-------------------+\n", w, ' ');
	printf("%*c| Avg. |%18.1f |\n", w, ' ', grades_sum / coef_sum);
	printf("%*c+------+-------------------+\n\n", w, ' ');
	sleep(SLEEP);
}
