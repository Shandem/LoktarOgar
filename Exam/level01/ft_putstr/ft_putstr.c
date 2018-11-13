#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	ft_putstr(av[1]);
	return (0);
}
