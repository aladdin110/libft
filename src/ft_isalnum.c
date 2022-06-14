#include "../include/libft.h"

int ft_isalnum(int arg)
{
    if (!ft_isalpha(arg) || !ft_isdigit(arg))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}