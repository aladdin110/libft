#include "../include/libft.h"

void *ft_memset(void *str, int c, size_t n)
{

    unsigned char *ptr = str;

    int i;
    for (i = 0; i < n; i++)
    {
        ptr[i] = (unsigned char)c;
    }
}