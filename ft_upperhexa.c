/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:05:20 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/13 02:27:15 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upperhexa(unsigned int n)
{
	int		l;
	char	*hexa;

	hexa = "0123456789ABCDEF";
	l = ft_lenhexa(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 15)
	{
		ft_upperhexa(n / 16);
	}
	ft_putchar(hexa[n % 16]);
	return (l);
}
