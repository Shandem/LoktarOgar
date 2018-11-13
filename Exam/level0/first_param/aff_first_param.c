
#include <unistd.h>

char	first_param(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
	write(1, "\n", 1);
	return (*str);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	else
		first_param(av[1]);
	return (0);
}
