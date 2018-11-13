#include <unistd.h>

int	ft_space(int i)
{
	if (i == 32 || (i >= 9 && i <= 13))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (ft_space(av[1][i]))
			i++;
		while (av[1][i] && !ft_space(av[1][i]))
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
