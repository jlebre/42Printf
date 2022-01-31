/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 18:16:48 by jlebre            #+#    #+#             */
/*   Updated: 2021/12/22 15:22:27 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>

int	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *, ...);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int k, int fd);
int	ft_putnbr_base_fd(int n, char *base, int k, int fd);
void	ft_putpointer_fd(char *ptr, int fd);

#endif