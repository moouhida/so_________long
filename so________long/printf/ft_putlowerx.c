/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheXxa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:32:22 by moouhida          #+#    #+#             */
/*   Updated: 2024/11/26 20:32:27 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowerx(unsigned int n)
{
	int		x;
	char	*str;

	x = 0;
	str = "0123456789abcdef";
	if (n >= 16)
	{
		x += ft_putlowerx(n / 16);
	}
	x += ft_putchar(str[(n % 16)]);
	return (x);
}
