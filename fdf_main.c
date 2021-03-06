/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddu-toit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 12:42:05 by ddu-toit          #+#    #+#             */
/*   Updated: 2016/06/02 15:33:32 by ddu-toit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	init_map(t_mapinfo *map, char **argv, int err)
{
	if (err != 2)
	{
		map->scale_x = ft_atoi(argv[2]);
		map->scale_y = ft_atoi(argv[3]);
	}
	else
	{
		map->scale_x = DEFAULT_SCALE;
		map->scale_y = DEFAULT_SCALE;
	}
	map->ori_x = map->scale_x;
	map->ori_y = map->scale_y;
	map->points_num = map->lines * map->width;
}

int			main(int argc, char **argv)
{
	t_mapinfo	map;
	int			err;

	map = read_map(argv[1]);
	err = (ft_argcheck(argc, argv));
	init_map(&map, argv, err);
	ft_map(&map, &map.points);
	free_file(map);
	map.mlx = mlx_init();
	map.win = mlx_new_window(map.mlx, WIN_X, WIN_Y, "FdF");
	ft_init_map(&map);
	mlx_key_hook(map.win, key_hook, &map);
	mlx_loop(map.mlx);
}
