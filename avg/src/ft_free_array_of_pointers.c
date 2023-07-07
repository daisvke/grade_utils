#include "avg.h"

int	ft_free_grades(t_course **grade_array, size_t arr_size)
{
	size_t	i;

	i = 0;
	while (i < arr_size)
	{
		free(grade_array[i]);
		++i;
	}
	free(grade_array);
	grade_array = NULL;

	return (1);
}
