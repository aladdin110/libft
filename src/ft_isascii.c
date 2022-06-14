#include "../include/libft.h"

int ft_isascii(int arg) {
    if (arg >= 0 && arg <= 255) {
        return 0;
    } else {
        return 1;
    }
}