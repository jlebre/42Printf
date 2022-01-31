#include "libftprintf.h"

void	ft_putpointer_fd(char *ptr, int fd)
{
	ft_putchar("0x");
	ft_putnbr_base_fd(ptr, "0123456789abcdef", 1); 
}

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char*)s);
        *s++;
    }
    return (NULL);
}