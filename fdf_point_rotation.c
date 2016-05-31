/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_point_rotation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddu-toit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 13:21:30 by ddu-toit          #+#    #+#             */
/*   Updated: 2016/05/31 11:07:12 by ddu-toit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Manipulate t_points*/
#include "fdf.h"

void	rotate_x(float angle, t_mapinfo *map)
{
	float	y1;
	float	z1;
	int		u;
	int		v;

	v = 0;
	while (v < map->lines)
	{
		u = 0;
		while (u < map->width)
		{
			y1 = map->points[v][u].y * cos(angle) - map->points[v][u].z * sin(angle);
			z1 = map->points[v][u].z * cos(angle) + map->points[v][u].y * sin(angle);
			map->points[v][u].y = y1;
			map->points[v][u].z = z1;
			u++;
		}
		v++;
	}
}

void	rotate_y(float angle, t_mapinfo *map)
{
	float	x1;
	float	z1;
	int		i;
	int		u;
	int		v;

	v = 0;
	while (v < map->lines)
	{
		u = 0;
		while (u < map->width)
		{
			x1 = map->points[v][u].x * cos(angle) - map->points[v][u].z * sin(angle);
			z1 = map->points[v][u].z * cos(angle) + map->points[v][u].x * sin(angle);
			map->points[v][u].y = x1;
			map->points[v][u].z = z1;
			u++;
		}
		v++;
	}
/*
	while (i < points)
	{	
		x1 = pt[i].x * cos(angle) - pt[i].z * sin(angle);
		z1 = pt[i].z * cos(angle) + pt[i].x * sin(angle);
		pt[i].x = x1;
		pt[i].z = z1;
		i++;
	}
	*/
}

void	rotate_z(float angle, t_mapinfo *map)
{
	float	x1;
	float	y1;
	int		i;

	int		u;
	int		v;

	v = 0;
	while (v < map->lines)
	{
		u = 0;
		while (u < map->width)
		{
			x1 = map->points[v][u].x * cos(angle) - map->points[v][u].y * sin(angle);
			y1 = map->points[v][u].x * sin(angle) + map->points[v][u].y * cos(angle);
			map->points[v][u].x = x1;
			map->points[v][u].y = y1;
			u++;
		}
		v++;
	}
/*
	i = 0;
	while (i < points)
	{	
		x1 = pt[i].x * cos(angle) - pt[i].y * sin(angle);
		y1 = pt[i].x * sin(angle) + pt[i].y * cos(angle);
		pt[i].x = x1;
		pt[i].y = y1;
		i++;
	}
*/
}
