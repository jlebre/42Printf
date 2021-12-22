/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:13:22 by jlebre            #+#    #+#             */
/*   Updated: 2021/12/22 19:59:30 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int check(char c, va_list arg)
{
    if (c == 'c')
        return (ft_putchar_fd(va_arg(arg, int), 1));
    else if (c == 's')
        ft_putstr();
    else if (c == 'p')
        {
            write(1, "0x", 2);
            ft_putnbr_base();
        }
    else if (c == 'd')
        ft_putnbr_decimal();
    else if (c == 'i')
        ft_putnbr();
    else if (c == 'u')
        ft_putnbr_decimal();
    else if (c == 'x')
        ft_putnbr_base();
    else if (c == 'X')
        ft_putnbr_base();
    else if (c == '%')
        ft_putchar();
}

int	ft_printf(const char *c, ...)
{
    if (!c)
        return (-1);
    va_list arg;
    va_start(arg, c);
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (c[i])
    {
        if (c[i] == '%')
            {
                if (ft_strchr("cspdiuxX", c[++i]))
                    counter += check(c[i], arg);
                else
                    counter += write(1, &c[i++], 1); 
            }
        else
            counter += write(1, &c[i++], 1);  
        i++;
    }
    va_end(arg);
    return (counter);
}
