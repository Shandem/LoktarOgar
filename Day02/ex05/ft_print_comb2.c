#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		x;

	i = 0;
	while (i <= 98)
	{
		x = i + 1;
		while (x <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			if (i != 98 || x != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			x++;
		}
		i++;
	}
}

int     main()
{
    ft_print_comb2();
    ft_putchar('\n');
    return(0);
}