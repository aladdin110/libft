#include "../include/libft.h"

int ft_isprint(int arg)
{
    int i;
    if (arg == 0x7f)
    {
        return 1;
    }
    for (i = 0x00; i < 0x1f; i++)
    {
        if (arg == i)
        {
            return 1;
        }
    }
    return 0;
}