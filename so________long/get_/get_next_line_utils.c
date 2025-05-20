/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 02:12:13 by moouhida          #+#    #+#             */
/*   Updated: 2024/12/26 04:51:51 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc((ft_strlen(str) + 1 * sizeof(char)));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(const char *le, const char *et)
{
	size_t	i;
	size_t	in;
	char	*leet;

	leet = malloc((ft_strlen(le) + ft_strlen(et) + 1) * sizeof(char));
	if (!leet)
		return (NULL);
	i = 0;
	in = 0;
	if (le)
	{
		while (le[i])
		{
			leet[i] = le[i];
			i++;
		}
	}
	while (et[in])
	{
		leet[i] = et[in];
		in++;
		i++;
	}
	leet[i] = '\0';
	return (leet);
}

char	*ft_start(char *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*new;

	x = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[start])
	{
		new[x] = s[start];
		x++;
		start++;
	}
	new[x] = '\0';
	return (new);
}
