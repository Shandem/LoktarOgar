#include <unistd.h>

int     space(int i)
{
    if (i == 32 || (i >= 9 && i <= 13))
        return (1);
    return (0);
}

int     main(int ac, char **av)
{
    int i;
    int flg;

    if (ac == 2)
    {
        while (space(av[1][i]))
            i++;
        while (av[1][i])
        {
            if (space(av[1][i]))
                flg = 1;
            if (!(space(av[1][i])))
            {
                if (flg)
                    write(1, "   ", 3);
                flg = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}