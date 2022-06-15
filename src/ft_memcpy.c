#include "../include/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dest = dest;
    const unsigned char *ptr_src = src;

    int i;
    for (i = 0; i < n; i++)
    {
        ptr_dest[i] = (unsigned char) ptr_src[i];
    }
}