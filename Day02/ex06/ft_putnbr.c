#include <unistd.h>

void	ft_putchar(char c) /*putchar prints the value */
{
    write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr; /* handels the whole value of a int 4,294,967,295 */

	if (nb < 0)
	{
		ft_putchar('-'); /* checking for the negative */
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48); /* 48 is the ascii value of '0' */
}

int		main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	return 0;
}
