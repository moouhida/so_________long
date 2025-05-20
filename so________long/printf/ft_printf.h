/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:47:37 by moouhida          #+#    #+#             */
/*   Updated: 2024/11/26 20:47:40 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putlowerx(unsigned int n);
int	ft_putupx(unsigned int n);
int	ft_putnbr(int num);
int	putunbr(unsigned int nb);
int	ft_putchar(char d);
int	ft_putstr(char *str);
int	ft_putlongx(unsigned long long n);
int	ft_putadress(va_list args);

#endif
