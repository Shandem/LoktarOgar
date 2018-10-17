#include <unistd.h>

void	ft_putchar(char c)
{
    write (1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int	i;
	int	a;

	i = 1;
	while (i < argc)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}