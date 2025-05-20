/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheXa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:30:11 by moouhida          #+#    #+#             */
/*   Updated: 2024/11/26 20:30:15 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupx(unsigned int n)
{
	int		count;
	char	*str;

	count = 0;
	str = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_putupx(n / 16);
	}
	count += ft_putchar(str[n % 16]);
	return (count);
}
