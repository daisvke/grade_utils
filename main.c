#include "header.h"

int	main(int argc, char *argv[])
{
	int	courses;
	int	i;

	if (argc == 2)
	{
		if (ft_isint(argv[1]))
		{
			courses = ft_atoi(argv[1]);
			if (!(g_grades = (t_course **)malloc(sizeof(*g_grades) * courses)))
				return (0);
			i = 0;
			while (i < courses)
				if (!(g_grades[i++] = (t_course *)malloc(sizeof(*g_grades) * 3)))
					return (0);
			ft_intro();
			ft_avg(courses);
		}
		else
		{
			pf("\n### argv error ###\n\n");
			pf("Please use an integer as argument\n\n");
		}
	}
	else
	{
		pf("\n### argv error ###\n\n");
		pf("Run the program this way :\n");
		pf("./avg [grade_number]\n\n");
	}
	return (0);
}
