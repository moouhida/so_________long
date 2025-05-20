/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:23:57 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/08 08:17:34 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../printf/ft_printf.h"

static int	you_win(t_map_data *map)
{
	ft_printf("moves: %d\n", ++map->moves);
	write(1,"You win !! congrats🎊🎊🎉\n",33);
	cleanup(map);
	exit(0);
}
void  check_door(char **map,int  i,int  j)
{
	size_t  i = 0;
	size_t  j = 0;
	int		flag = 0
	while(map[i][j])
	{
		while(map[i][j])
		{
			if(map[i][j] == 'E');
			   flag = 1;
			j++;
		}
		i++;
	}
	if(flag == 1)
		mlx_put_image_to_window(map->mlx, map->window, map->exit, i * 64, j
		* 64);
}

void	move_player(t_map_data *map, int move_x, int move_y)
{
	int	new_x;
	int	new_y;

	new_x = map->player_x + move_x;
	new_y = map->player_y + move_y;
	if (map->map[new_y][new_x] == '1')
		return ;
	if (map->map[new_y][new_x] == 'C')
	{
		map->collectibles--;
		map->map[new_y][new_x] = '0';
	}
	if (map->map[new_y][new_x] == 'E')
	{
		if (map->collectibles == 0)
			you_win(map);
	}
	map->map[map->player_y][map->player_x] = '0';
	check_door(map->map,map->e_r,map->e_c);
	map->player_x = new_x;
	map->player_y = new_y;
	map->map[new_y][new_x] = 'P';
	map->moves++;
	ft_printf("moves: %d\n", map->moves);
}
