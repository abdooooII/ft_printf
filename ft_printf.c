/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:53:24 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/15 20:46:17 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	int		len;
	int		i;
	int		j;
	va_list	ap;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(ap, f);
	i = -1;
	len = 0;
	j = 0;
	while (f[++i])
	{
		if (f[i] == '%' && f[i + 1])
		{
			len += ft_format(ap, f[i + 1], j);
			i++;
		}
		else if (f[i] == '%')
			continue ;
		else
			len += ft_putchar(f[i]);
	}
	va_end(ap);
	return (len);
}
