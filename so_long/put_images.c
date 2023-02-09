/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maouzal <maouzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:47:20 by maouzal           #+#    #+#             */
/*   Updated: 2023/02/09 21:32:55 by maouzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_emages(t_data *p)
{
	int	x;
	int	y;

	p->player = mlx_xpm_file_to_image(p->mlx,
			"/Users/maouzal/Desktop/so_long/ textures/sonic.xpm", &x, &y);
	p->wall = mlx_xpm_file_to_image(p->mlx,
			"/Users/maouzal/Desktop/so_long/ textures/new_wall.xpm", &x, &y);
	p->ring = mlx_xpm_file_to_image(p->mlx,
			"/Users/maouzal/Desktop/so_long/ textures/coin-40.xpm", &x, &y);
	p->exit = mlx_xpm_file_to_image(p->mlx,
			"/Users/maouzal/Desktop/so_long/ textures/exit1.xpm", &x, &y);
	p->enemy = mlx_xpm_file_to_image(p->mlx,
			"/Users/maouzal/Desktop/so_long/ textures/Fire.xpm", &x, &y);
	p->grass = mlx_xpm_file_to_image(p->mlx,
			"/Users/maouzal/Desktop/so_long/ textures/black.xpm", &x, &y);
}

void	func(t_data *p, int x, int y)
{
	char	*str;

	str = ft_itoa(p->move_count);
	mlx_string_put(p->mlx, p->mlx_win, 50, 0, 0x00FF0000,
		str);
	if (p->map[x][y] == 'C')
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->ring, y * 50, x * 50);
	else if (p->map[x][y] == 'P')
	{
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->grass, y * 50, x * 50);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->player, y * 50, x * 50);
	}
	else if (p->map[x][y] == 'E')
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->exit, y * 50, x * 50);
	free (str);
}

void	loop_emage(t_data *p, int x, int y)
{
	while (p->map[x])
	{
		y = 0;
		while (p->map[x][y])
		{
			if (p->map[x][y] == '0')
				mlx_put_image_to_window(p->mlx, p->mlx_win, p->grass, y * 50, x
					* 50);
			else if (p->map[x][y] == '1')
				mlx_put_image_to_window(p->mlx, p->mlx_win, p->wall, y * 50, x
					* 50);
			func(p, x, y);
			y++;
		}
		x++;
	}
}
