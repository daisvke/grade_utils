#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <strings.h>

# define SLEEP_TIME	1

# define pf(x)	printf(x)

typedef struct s_course
{
	char	label[7];
	float	grad;
	float	coef;
	float	final_grad;
}	t_course;

t_course **g_grades;
int g_grd_nb;

int ft_atoi(const char *str);
void ft_cleanbuf(void);
void ft_avg(void);
int ft_ctoupper(int c);
void ft_fill_tab(void);
void ft_firstline(void);
int ft_isdigit(int c);
int ft_isint(char *s);
int ft_isws(int c);
void ft_intro(void);
void ft_lastline(float coef_sum, float grades_sum);
void ft_midline(int i);
int ft_modify_grd(void);
void ft_putcoef(int i);
void ft_putgrade(int i);
void ft_putlabel(int i);
void ft_put_grd_coef(int i);
void ft_run_avg(void);
void *ft_stoupper(char *s);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_free_grades(t_course **array_of_pointers, size_t arr_size);

#endif
