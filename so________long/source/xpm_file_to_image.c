/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xpm_file_to_image.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:08:12 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/07 09:40:31 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	xpm_file_to_image(t_map_data *map)
{
	int (w), (h);
	map->floor = mlx_xpm_file_to_image(map->mlx, "textures/floor.xpm", &w, &h);
	map->wall = mlx_xpm_file_to_image(map->mlx, "textures/wall.xpm", &w, &h);
	map->player = mlx_xpm_file_to_image(map->mlx, "textures/player.xpm", &w,
			&h);
	map->coin = mlx_xpm_file_to_image(map->mlx, "textures/coin.xpm", &w, &h);
	map->exit = mlx_xpm_file_to_image(map->mlx, "textures/door.xpm", &w, &h);
	if (!map->floor || !map->wall || !map->player || !map->coin || !map->exit)
		return (0);
	return (1);
}
