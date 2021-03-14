#include "header.h"

void	ft_logo(void)
{
	pf("  ___         ______\n");
	pf(" / _ \\       / _____\\\n");
	pf("| |_| |_   _| | _____\n");
	pf("|  _  |\\ \\//| | |__  |\n");
	pf("|_| |_| \\_/  \\______/\n");
	pf("\n\n");
}

void	ft_intro(void)
{
	ft_logo();
	sleep(SLEEP);
	pf("\n### This program will calculate your average grade ###\n\n");
	sleep(SLEEP);
}

