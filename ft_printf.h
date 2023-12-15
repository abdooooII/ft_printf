/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:25:02 by ichaabi           #+#    #+#             */
/*   Updated: 2023/12/15 20:47:15 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_putnbr(long n);
int		ft_countlen(long long n);
int		ft_upperhexa(unsigned int n);
int		ft_lowerhexa(unsigned int n);
int		ft_lenhexa(long long n);
int		ft_unsigned(unsigned int n);
int		ft_putadd(unsigned long n);
int		ft_printf(const char *f, ...);
int		ft_format(va_list ap, const char f, int l);

#endif
