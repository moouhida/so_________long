/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <moouhida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:24:44 by moouhida          #+#    #+#             */
/*   Updated: 2025/04/08 03:06:46 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_map_data		map;

	if (ac != 2 || !check_file_name(av[1]))
		return (message_error("Error\nNo such file or directory !\n"), 1);
	if (!check_map(av[1], &map))
		return (message_error("Error\nInvalid map !\n"), 1);
	if (!run_window(&map))
		return (message_error("Error\nWindow is not running !\n"), 1);
}
