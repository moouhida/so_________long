/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_player_and_coins.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:41:40 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/07 09:41:43 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	find_player_and_coins(t_map_data *map)
{
	int	i;
	int	j;

	i = 0;
	map->collectibles = 0;
	while (map->map[i])
	{
		j = 0;
		while (map->map[i][j])
		{
			if (map->map[i][j] == 'P')
			{
				map->player_x = j;
				map->player_y = i;
			}
			else if (map->map[i][j] == 'C')
				map->collectibles++;
			j++;
		}
		i++;
	}
}
