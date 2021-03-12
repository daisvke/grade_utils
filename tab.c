#include "header.h"

void	ft_firstline(void)
{
	pf("\n");
	pf("+------+------+------------+\n");
	pf("| Grad | Coef | Final Grad |\n");
	pf("+------+------+------------+\n");
}

void	ft_midline(int i)
{
	printf("|%5.1f |%5.1f |%11.1f |\n", g_grades[i]->grad, \
			g_grades[i]->coef, g_grades[i]->final_grad);
	printf("+------+------+------------+\n");
}

void	ft_lastline(float coef_sum, float grades_sum)
{
	printf("\n+------+------+------------+\n");
	printf("| Tot. |%5.1f |%11.1f |\n", coef_sum, grades_sum);
	printf("+------+-------------------+\n");
	printf("| Avg. |%18.1f |\n", grades_sum / coef_sum);
	printf("+------+-------------------+\n\n");
	sleep(SLEEP);
	printf("Thank you for using this program !\n\n");
	free(g_grades);
	sleep(SLEEP);
}
