/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:28:43 by moouhida          #+#    #+#             */
/*   Updated: 2024/12/14 17:05:38 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_argu(va_list args, char c)
{
	int	re;

	re = 0;
	if (c == 'd' || c == 'i')
		re = ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		re = ft_putchar((char)va_arg(args, int));
	else if (c == 's')
		re = ft_putstr(va_arg(args, char *));
	else if (c == 'x')
		re = ft_putlowerx(va_arg(args, unsigned int));
	else if (c == 'X')
		re = ft_putupx(va_arg(args, unsigned int));
	else if (c == 'p')
		re = ft_putadress(args);
	else if (c == 'u')
		re = putunbr(va_arg(args, unsigned int));
	else if (c == '%')
		return (ft_putchar('%'));
	return (re);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		re;

	if (!str)
		return (-1);
	va_start(args, str);
	re = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
			{
				re += ft_check_argu(args, str[++i]);
			}
		}
		else
			re += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (re);
}
