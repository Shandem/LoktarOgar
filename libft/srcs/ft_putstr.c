#include "libft.h"

void	ft_putstr(char *str)
{
	if (str)
		ft_putstr_fd(str, 1);
}
