#include "../include/libft.h"

int ft_strlen(const char *str) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}