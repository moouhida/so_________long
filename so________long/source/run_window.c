/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:24:37 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/08 08:27:45 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	on_keypress(int key_code, t_map_data *map)
{
	if (key_code == XK_Escape)
	{
		cleanup(map);
		exit(0);
	}
	else if (key_code == XK_w || key_code == XK_Up)
		move_player(map, 0, -1);
	else if (key_code == XK_s || key_code == XK_Down)
		move_player(map, 0, 1);
	else if (key_code == XK_a || key_code == XK_Left)
		move_player(map, -1, 0);
	else if (key_code == XK_d || key_code == XK_Right)
		move_player(map, 1, 0);
	draw_map(map);
	return (1);
}

static int	x_close_window(t_map_data *map)
{
	cleanup(map);
	exit(0);
}

int	run_window(t_map_data *map)
{
	map->mlx = mlx_init();
	if (!map->mlx)
		return (0);
	map->window = mlx_new_window(map->mlx, map->columns * 64, map->rows * 64,
			"so_long");
	if (!map->window)
		return (0);
	if (!xpm_file_to_image(map))
	{
		cleanup(map);
		return (0);
	}
	map->moves = 0;
	find_player_and_coins(map);
	draw_map(map);
	mlx_hook(map->window, KeyPress, KeyPressMask, &on_keypress, map);
	mlx_hook(map->window, 17, 0, &x_close_window, map);
	mlx_loop(map->mlx);
	return (1);
}
