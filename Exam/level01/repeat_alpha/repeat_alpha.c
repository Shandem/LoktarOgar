#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	repeat_alpha(char *str)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = str[i] - 65;
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
		repeat_alpha(av[1]);
	return (0);
}
