/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadres.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:45:06 by moouhida          #+#    #+#             */
/*   Updated: 2024/11/29 02:45:11 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(va_list args)
{
	int					re;
	unsigned long long	ptr;

	re = 0;
	ptr = va_arg(args, unsigned long long);
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	re = ft_putstr("0x");
	re += ft_putlongx(ptr);
	return (re);
}
