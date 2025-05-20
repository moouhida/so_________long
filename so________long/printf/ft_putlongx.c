/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:04:09 by moouhida          #+#    #+#             */
/*   Updated: 2024/11/29 01:04:15 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlongx(unsigned long long n)
{
	int		x;
	char	*str;

	x = 0;
	str = "0123456789abcdef";
	if (n >= 16)
	{
		x += ft_putlongx(n / 16);
	}
	x += ft_putchar(str[(n % 16)]);
	return (x);
}
