/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_edges_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:24:58 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/07 08:25:00 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_is_protected_by_1(t_map_data *map)
{
	int		i;
	int  	j;
	
	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->columns)
		{
			if (i == 0 && map->copy_map[i][j] != '1')
				return (0);
			if (i == (map->rows - 1) && map->copy_map[map->rows - 1][j] != '1')
				return (0);
			if (j == 0 && map->copy_map[i][j] != '1')
				return (0);
			if (j == (map->columns - 1) && map->copy_map[i][j] != '1')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
