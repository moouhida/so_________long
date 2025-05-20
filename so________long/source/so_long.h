/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:41:51 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/08 06:02:18 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "../include/minilibx-linux/mlx.h"
#include  "../get_/get_next_line.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_map_data
{
	int		zero;
	int		one;
	int		p;
	int		c;
	int		e;
	char	**copy_map;
	char	**map;
	int		rows;
	int		columns;
	void	*mlx;
	void	*window;
	void	*player;
	void	*floor;
	void	*wall;
	void	*coin;
	void	*exit;
	int		player_x;
	int		player_y;
	int		collectibles;
	int		moves;
	int		e_r;
	int		e_c;
}			t_map_data;

char		*get_next_line(int fd);
void		message_error(char *msg);
int			check_file_name(char *av);
int			check_map(char *filename, t_map_data *map);
int			flood_fill(t_map_data *map);
int			check_map_is_protected_by_1(t_map_data *map);
void		free_array(char **ptr, int i);
int			run_window(t_map_data *map);
int			xpm_file_to_image(t_map_data *map);
void		find_player_and_coins(t_map_data *map);
int			draw_map(t_map_data *map);
void		move_player(t_map_data *map, int move_x, int move_y);
void		cleanup(t_map_data *map);

#endif
