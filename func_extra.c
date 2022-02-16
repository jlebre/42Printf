#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (write(fd, "(null)", 6));
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (ft_strlen(s));
}

int	ft_putnbr_fd(int n, int k, int fd)
{
	if (n == (-2147483648))
		return (write(fd, "-2147483648", 11));
	if (n < 0)
	{
		k += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
		k += ft_putchar_fd(n, fd);
	else
	{
		ft_putnbr_fd(n / 10, k, fd);
		n %= 10;
		k += ft_putchar_fd(n, fd);
	}
	return (k);
}

int	ft_putnbr_base_fd(unsigned int n, char *base, int k, int fd)
{
	if (!base || ft_strlen(base) == 1)
		return (0);
	if (n < 16)
	{
		k += ft_putchar_fd((char)(*base + n), fd);
	}
	else	
	{
		ft_putnbr_base_fd(n / 16, base, k, fd);
		n %= 16;
		k += ft_putchar_fd((char)(*base + n), fd);
	}
	return (k);
}
