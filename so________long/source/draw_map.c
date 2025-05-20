/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:41:49 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/07 09:41:51 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	convert_char_to_png(t_map_data *map, int i)
{
	int	j;

	j = 0;
	while (map->map[i][j])
	{
		if (map->map[i][j] == '0')
			mlx_put_image_to_window(map->mlx, map->window, map->floor, j * 64, i
				* 64);
		else if (map->map[i][j] == '1')
			mlx_put_image_to_window(map->mlx, map->window, map->wall, j * 64, i
				* 64);
		else if (map->map[i][j] == 'P')
			mlx_put_image_to_window(map->mlx, map->window, map->player, j * 64,
				i * 64);
		else if (map->map[i][j] == 'C')
			mlx_put_image_to_window(map->mlx, map->window, map->coin, j * 64, i
				* 64);
		else if (map->map[i][j] == 'E')
			mlx_put_image_to_window(map->mlx, map->window, map->exit, j * 64, i
				* 64);
		j++;
	}
}

int	draw_map(t_map_data *map)
{
	int	i;
	i = 0;
	while (map->map[i])
	{
		convert_char_to_png(map, i);
		i++;
	}
	return (1);
}
