#include <stddef.h>

// part1
// the ft_isalpha() function checks wether a single character is an alphabet or not
int ft_isalpha(int arg);
// the ft_isdigit() function checks wether a single character is a digit or not
int ft_isdigit(int arg);
// the ft_isalnum() function checks wether a single character is a digit( or alphabet) or not
int ft_isalnum(int arg);
// the ft_isascii() function checks wether a the arg can be represented as a caracter in the ASCII characters set
int ft_isascii(int arg);
// the ft_isascii() function checks wether a the arg is a printable character
int ft_isprint(int arg);
// The ft_strlen() function calculates the length of a given string
int ft_strlen(const char *str);
// The memset function copies the character c to the first n characters of the string pointed to, by the argument str
void *ft_memset(void *str, int c, size_t n);
//The ft_bzero() function places n zero-valued bytes in the area pointed to by s
void ft_bzero(void *str, size_t n);
// The ft_memcpy() copies n characters from memory area src to memory area dest.
void *ft_memcpy(void *dest, const void * src, size_t n);
