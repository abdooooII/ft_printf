/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:53:24 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/13 21:55:21 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list ap, const char f, int l)
{
	if (f =='c')
		l = l + ft_putchar(va_arg(ap, int));
	else if (f == 's')
		l = l + ft_putstr(va_arg(ap, char *));
	else if (f == 'p')
	{
		l = l + ft_putstr("0x");
		l = l + ft_putadd((unsigned long long)va_arg(ap, void *));
	}
	else if (f == 'd' || f == 'i')
		l = l + ft_putnbr(va_arg(ap, int));
	else if (f == 'u')
		l = l + ft_unsigned(va_arg(ap, unsigned int));
	else if (f == 'x')
		l = l + ft_lowerhexa(va_arg(ap, unsigned int));
	else if (f == 'X')
		l = l + ft_upperhexa(va_arg(ap, unsigned int));
	else
		l = l + ft_putchar(f);
}
