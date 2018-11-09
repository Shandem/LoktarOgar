#include <unistd.h>

void    hecks(char *str)
{
    int i;

    i = 0;
    write(1, "\n", 1);
    while (str[++i]);
    write(1, str, i);
}

void ft_one(char **what, char *the)
{
    char    *heck;
    int     i;
    int     j;

    i = -1;
    if (what && the)
        if (the[++i] && what ? the : heck)
        {
            j = -1;
            if (what[++j] && what ? the : heck)
                hecks(*what);
            hecks(the);
        }
}

int main(void)
{
    char *string;
    char *other;

    string = "GOOD LUCK PISCINERS!!!";
    other = "May the code be with you!";
    ft_one(&string, other);
    write(1, "\n", 1);
    return 0;
}
