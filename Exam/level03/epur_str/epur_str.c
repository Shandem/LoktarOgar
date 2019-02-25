
#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int mark;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				mark = 1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
