int 	ft_ctoupper(int c)
{
	return (c >= 97 && c <= 122 ? c - 32 : c);
}

void	ft_stoupper(char *s)
{
	while (*s)
	{
		*s = ft_ctoupper(*s);
		s++;
	}
}
