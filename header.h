#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define SLEEP 1
# define pf(x) printf(x)

typedef	struct	s_course
{
	float	grad;
	float	coef;
	float	final_grad;
}				t_course;

t_course	**g_grades;

int		ft_atoi(const char *str);
void	ft_cleanbuf(void);
void	ft_avg(int courses);
void	ft_firstline(void);
int		ft_isdigit(int c);
int		ft_isint(char *s);
int		ft_isws(int c);
void	ft_intro(void);
void	ft_lastline(float coef_sum, float grades_sum);
void	ft_midline(int i);
void	ft_putcoef(int i);
void	ft_putgrade(int i);

#endif
