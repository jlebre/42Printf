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
    return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}