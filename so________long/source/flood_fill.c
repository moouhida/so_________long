/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:52:26 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/07 09:52:28 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	flood_fill_rec(t_map_data *map, int x, int y)
{
	int	count_coin;

	count_coin = 0;
	if (x < 0 || x >= map->rows || y < 0 || y >= map->columns)
		return ;
	if (map->copy_map[x][y] != '0' && map->copy_map[x][y] != 'C'
		&& map->copy_map[x][y] != 'P' && map->copy_map[x][y] != 'E')
		return ;
	if (map->copy_map[x][y] == 'C')
		count_coin++;
	if (map->copy_map[x][y] == 'E' && map->c != count_coin)
	{
		map->e_r = x;
		map->e_r = y;
		map->copy_map[x][y] = 'M';
		return ;
	}
	map->copy_map[x][y] = 'M';
	flood_fill_rec(map, x + 1, y);
	flood_fill_rec(map, x - 1, y);
	flood_fill_rec(map, x, y + 1);
	flood_fill_rec(map, x, y - 1);
}

static int	check_flood_fill(t_map_data *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->copy_map[i])
	{
		j = 0;
		while (map->copy_map[i][j])
		{
			if (map->copy_map[i][j] == 'C' || map->copy_map[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	flood_fill(t_map_data *map)
{
	int	x;
	int	y;

	x = 0;
	while (x < map->rows)
	{
		y = 0;
		while (y < map->columns)
		{
			if (map->copy_map[x][y] ==  'P')
			{
				flood_fill_rec(map, x, y);
				if (check_flood_fill(map))
					return (1);
				return (0);
			}
			y++;
		}
		x++;
	}
	return (0);
}
