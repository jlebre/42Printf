#include "libftprintf.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (ft_strlen(c));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i], fd);
		i++;
	}
	return (ft_strlen(s));
}

int	ft_putnbr_fd(int n, int k, int fd)
{
	if (n == (-2147483648))
	{
		ft_putstr("-2147483648", fd);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			k++;
			n = -n;
		}
		if (n > 9)
		{
			k++;
			ft_putnbr_fd(n / 10, k, fd);
			n %= 10;
		}
		ft_putchar_fd(n + '0', fd);
	}
	return (k);
}

int	ft_putnbr_base_fd(int n, char *base, int k, int fd)
{
	int	i;

	i = 0;
	if (!base || ft_strlen(base) == 1)
		return ;
			//Decimal
	if (base == "0123456789")
	{
		ft_putnbr_base_fd(n, base, k, fd);
	}
			//Hexadecimal
	else if (base == "0123456789abcdef" || base == "0123546789ABCDEF")
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			k++;
			n = -n;
		}
		if (n > 16)
		{
			k++;
			ft_putnbr_base_fd(n / 16, base, k, fd);
			n %= 16;
		}
		ft_putchar_fd((char *)(*base + n), fd);
	}
	else
		return ;
}