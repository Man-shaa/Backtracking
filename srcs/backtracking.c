/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:27:43 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 18:51:28 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/backtracking.h"

int	recursive(t_data *data, int y, int x, int *dest)
{
	data->map.map[y][x] = '1';
	if (y == dest[0] && x == dest[1])
		return (1);
	if (data->map.map[y][x - 1] != '1')
		if (recursive(data, y, x - 1, dest))
			return (1);
	if (data->map.map[y - 1][x] != '1')
		if (recursive(data, y - 1, x, dest))
			return (1);
	if (data->map.map[y][x + 1] != '1')
		if (recursive(data, y, x + 1, dest))
			return (1);
	if (data->map.map[y + 1][x] != '1')
		if (recursive(data, y + 1, x, dest))
			return (1);
	return (0);
}

int	is_map_possible(t_data *data, char *path)
{
	int	y;
	int	x;
	int	*dest;

	y = 0;
	dest = ft_calloc(2, sizeof(int));
	while (y < data->map.height)
	{
		x = 0;
		while (x < data->map.length)
		{
			if (data->map.map[y][x] == 'C' || data->map.map[y][x] == 'E')
			{
				dest[0] = y;
				dest[1] = x;
				if (!recursive(data, data->player_y, data->player_x, dest))
				{
					fill_map(data, path);
					printf("For %c at (%d ; %d) : No possible path\n", data->map.map[y][x], y, x);
				}
				else
				{
					fill_map(data, path);
					printf("For %c at (%d ; %d) : Path found\n", data->map.map[y][x], y, x);
				}
			}
			x++;
		}
		y++;
	}
	return (free(dest), 1);
}
