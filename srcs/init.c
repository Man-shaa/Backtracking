/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:55:30 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 14:46:12 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/backtracking.h"

int	init_player(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (y < data->map.height)
	{
		x = 0;
		while (x < data->map.length)
		{
			if (data->map.map[y][x] == 'P')
			{
				data->player_y = y;
				data->player_x = x;
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}
