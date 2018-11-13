#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	char	mvup;
	char	mvdwn;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			mvup = av[1][i] + 13;
			mvdwn = av[1][i] - 13;
			if (('A' <= av[1][i] && 'M' >= av[1][i])
				|| ('a' <= av[1][i] && 'm' >= av[1][i]))
				write(1, &mvup, 1);
			else if (('N' <= av[1][i] && 'Z' >= av[1][i])
				|| ('n' <= av[1][i] && 'z' >= av[1][i]))
				write(1, &mvdwn, 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
