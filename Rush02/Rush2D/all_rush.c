void	ft_putchar(char c);

void	ft_print_row(int x, char a, char b, char c)
{
	int	i;

	if (x == 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
	}
	if (x > 1)
	{
		i = 2;
		ft_putchar(a);
		while (i < x)
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void	rush_0(int x, int y)
{
	if (y >= 1)
		ft_print_row(x, 'o', '-', 'o');
	while (y > 2)
	{
		ft_print_row(x, '|', ' ', '|');
		y--;
	}
	if (y > 1)
		ft_print_row(x, 'o', '-', 'o');
}

void	rush_1(int x, int y)
{
	if (y >= 1)
		ft_print_row(x, '/', '*', '\\');
	while (y > 2)
	{
		ft_print_row(x, '*', ' ', '*');
		y--;
	}
	if (y > 1)
		ft_print_row(x, '\\', '*', '/');
}

void	rush_2(int x, int y)
{
	if (y >= 1)
		ft_print_row(x, 'A', 'B', 'A');
	while (y > 2)
	{
		ft_print_row(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
		ft_print_row(x, 'C', 'B', 'C');
}

void	rush_3(int x, int y)
{
	if (y >= 1)
		ft_print_row(x, 'A', 'B', 'C');
	while (y > 2)
	{
		ft_print_row(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
		ft_print_row(x, 'A', 'B', 'C');
}

void	rush_3(int x, int y)
{
	if (y >= 1)
		ft_print_row(x, 'A', 'B', 'C');
	while (y > 2)
	{
		ft_print_row(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
		ft_print_row(x, 'C', 'B', 'A');
}
