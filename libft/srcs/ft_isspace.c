#include "libft.h"

int	ft_isspace(int i)
{
	if (i == 32 || i > 9 && i < 13)
		return (1);
	return (0);
}
