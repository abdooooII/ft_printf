/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:05:20 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/17 17:23:47 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long long n, int check)
{
	int		l;
	char	*hexa;
	char	*upphexa;

	upphexa = "0123456789ABCDEF";
	hexa = "0123456789abcdef";
	l = ft_lenhexa(n);
	if (n > 15)
		ft_hexa(n / 16, check);
	if (check == 1)
		ft_putchar(upphexa[n % 16]);
	else
		ft_putchar(hexa[n % 16]);
	return (l);
}
