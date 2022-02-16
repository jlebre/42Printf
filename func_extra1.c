#include "ft_printf.h"

int	ft_putpointer_fd(char *ptr, int fd)
{
	if (!ptr)
		return (ft_putchar("0x")); 
	return (ft_putchar("0x") + ft_putnbr_base_fd(ptr, "0123456789abcdef", 0, 1));
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

int	ft_unsigned(unsigned int nb, int fd)
{
	int count;

	count = 0;
	if (nb >= 0 && nb < 10)
	{
		nb += '0';
		count += ft_putchar_fd(nb, 1);
	}
	else
	{
		count += ft_unsigned(nb / 10, 1);
		nb = nb % 10 + '0';
		count += ft_putchar_fd(nb, 1);
	}
	return (count);
}