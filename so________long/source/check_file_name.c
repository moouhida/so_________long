/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:25:03 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/07 08:25:06 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_file_name(char *av)
{
	size_t	len;

	len = ft_strlen(av);
	if (len > 4 && av[len - 4] == '.' && av[len - 3] == 'b'
		&& av[len - 2] == 'e' && av[len - 1] == 'r')
		return (1);
	return (0);
}
