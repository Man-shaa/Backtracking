/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:00:37 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 17:55:07 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/backtracking.h"

void	print_map(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (y < data->map.height)
	{
		x = 0;
		while (x < data->map.length)
		{
			printf("%c	", data->map.map[y][x]);
			x++;
		}
		printf("\n");
		y++;
	}
}

void	print_player_pos(t_data *data)
{
	printf("(%d ; %d)\n", data->player_y, data->player_x);
}

void	print_dest(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (y < data->map.height)
	{
		x = 0;
		while (x < data->map.length)
		{
			if (data->map.map[y][x] == 'D')
				printf("(%d ; %d)\n", y, x);
			x++;
		}
		y++;
	}
}
