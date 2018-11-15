#include <unistd.h>

int	blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (blank(*av[1]))
			av[1]--;
		while (*av[1] && !blank(*av[1]))
			av[1]--;
		av[1]++;
		while (*av[1] && !blank(*av[1]))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
