#include "avg.h"

int main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{
		if (ft_isint(argv[1]))
		{
			g_grd_nb = ft_atoi(argv[1]);
			if (!(g_grades = (t_course **)malloc(sizeof(*g_grades) * g_grd_nb)))
				return (1);

			bzero(g_grades, g_grd_nb); // Zero-initialize global variable
			i = 0;
			while (i < g_grd_nb){
				if (!(g_grades[i] = (t_course *)malloc(sizeof(*g_grades) * 4)))
					return ft_free_grades(g_grades, i);
				++i;
			}
			ft_run_avg();
			
			ft_free_grades(g_grades, g_grd_nb);
			printf("\nSee you!\n\n");
		}
		else
			pf("\n### Error: Please use an integer as argument ###\n\n");
	}
	else
		pf("Usage: ./avg [number_of_grade]\n\n");
	return (0);
}
