#include "header.h"

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 2)
	{
		if (ft_isint(argv[1]))
		{
			g_grd_nb = ft_atoi(argv[1]);
			if (!(g_grades = (t_course **)malloc(sizeof(*g_grades) * g_grd_nb)))
				return (0);
			i = 0;
			while (i < g_grd_nb)
				if (!(g_grades[i++] = (t_course *)malloc(sizeof(*g_grades) * 4)))
					return (0);
			ft_run_avg();
			printf("\nThank you for using this program !\n\n");
			free(g_grades);
			sleep(SLEEP);
		}
		else
		{
			pf("\n### argv error ###\n\n");
			pf("Please use an integer as argument\n\n");
		}
	}
	else
	{
		pf("\n### arg error ###\n\n");
		pf("Run the program this way :\n");
		pf("./avg [number_of_grade]\n\n");
	}
	return (0);
}
