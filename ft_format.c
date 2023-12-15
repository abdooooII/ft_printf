/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:46:33 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/15 21:53:06 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, const char f, int l)
{
	if (f == 'c')
		l = l + ft_putchar(va_arg(ap, int));
	else if (f == 's')
		l = l + ft_putstr(va_arg(ap, char *));
	else if (f == 'p')
	{
		l = l + ft_putstr("0x");
		l = l + ft_hexa((unsigned long long)va_arg(ap, void *), 0);
	}
	else if (f == 'd' || f == 'i')
		l = l + ft_putnbr(va_arg(ap, int));
	else if (f == 'u')
		l = l + ft_unsigned(va_arg(ap, unsigned int));
	else if (f == 'x')
		l = l + ft_hexa(va_arg(ap, unsigned int), 0);
	else if (f == 'X')
		l = l + ft_hexa(va_arg(ap, unsigned int), 1);
	else
		l = l + ft_putchar(f);
	return (l);
}
