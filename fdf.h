/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddu-toit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 12:30:36 by ddu-toit          #+#    #+#             */
/*   Updated: 2016/06/02 15:37:11 by ddu-toit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <libc.h>
# include <math.h>
# include "libft.h"
# include "mlx.h"
# define WIN_X 800
# define WIN_Y 600
# define DEFAULT_SCALE 20
# define ANGL 5

typedef struct		s_point
{
	int	x;
	int	y;
	int	z;
	int	col;
}					t_point;

typedef struct		s_mapinfo
{
	char	**map;
	int		lines;
	int		width;
	int		points_num;
	void	*mlx;
	void	*win;
	t_point	**points;
	int		scale_x;
	int		scale_y;
	float	rot_x;
	float	rot_y;
	float	rot_z;
	int		ori_x;
	int		ori_y;
}					t_mapinfo;

t_point				new_point(int x, int y, int z);

void				translate_point(int x, int y, int z, t_mapinfo *map);

void				translate_rot(float angle, t_mapinfo *map,
						void (f)(float, t_mapinfo *));

void				scale_points(t_mapinfo *map, int scale_x, int scale_y);

void				rotate_x(float angle, t_mapinfo *map);

void				rotate_y(float angle, t_mapinfo *map);

void				rotate_z(float angle, t_mapinfo *map);

t_mapinfo			read_map(char *filename);

void				ft_map(t_mapinfo *map, t_point ***cloud);

void				ft_init_map(t_mapinfo *mapinfo);

int					ft_argcheck(int argc, char **argv);

void				draw_line(t_point v1, t_point v2, t_mapinfo *m);

void				ft_movemap(t_mapinfo *map, int offset_x, int offset_y);

void				ft_centremap(t_mapinfo *map);

void				ft_draw_map(t_mapinfo map);

int					key_hook(int keycode, t_mapinfo *map);

t_point				**ft_mapcopy(t_mapinfo *map);

void				free_map(t_mapinfo map);

void				free_file(t_mapinfo map);

#endif
