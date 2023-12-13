/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 03:34:36 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/13 04:07:00 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	l;

	l = ft_countlen(n);
	if (n > 9)
	{
		ft_unsigned(n / 10);
		ft_unsigned(n % 10);
	}
	else
		ft_putchar(n + 48);
	return (l);
}
