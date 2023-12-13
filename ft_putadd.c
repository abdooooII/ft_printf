/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 04:42:40 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/13 04:47:28 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(unsigned long n)
{
	char	*hexa;
	int		l;

	hexa = "0123456789abcdef";
	if(n > 15)
	{
		l  = l  + ft_putadd(n / 16);
		l  = l  + ft_putadd(n % 16);
	}
	else
		l = l + ft_putchar(hexa[n])
	return (l)
}