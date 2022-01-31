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
        return (ft_putstr_fd(va_arg(arg, char), 1));
    else if (c == 'p')
            return (ft_putpointer_fd(va_arg(arg, int), 1));
    else if (c == 'd')
        return (ft_putnbr_base_fd(va_arg(arg, int), "0123456789", 1));
    else if (c == 'i')
        return (ft_putnbr_fd(va_arg(arg, int), 1));
    else if (c == 'u') //unsigned decimal
        
    else if (c == 'x')
        return (ft_putnbr_base_fd(va_arg(arg, int), "0123456789abcdef", 1));
    else if (c == 'X')
        return (ft_putnbr_base_fd(va_arg(arg, int), "0123456789ABCDEF", 1));
    else if (c == '%')
        return (ft_putchar_fd(c, 1));
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