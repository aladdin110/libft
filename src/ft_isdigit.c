#include "../include/libft.h"

int ft_isdigit(int arg)
{
    if (arg >= '0' && arg <= '9')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}