/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uperhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouafso <abouafso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:05:20 by abouafso          #+#    #+#             */
/*   Updated: 2023/12/12 18:43:51 by abouafso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uperhexa(unsigned int n)
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
		ft_uperhexa(n / 16);
	}
	ft_putchar(hexa[n % 16]);
	return (l);
}
int main()
{
	ft_uperhexa(2444);
}
