/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:15:31 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 14:46:19 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/backtracking.h"

t_data	*create_data()
{
	t_data	*data;

	data = ft_calloc(1, sizeof(t_data));
	if (!data)
		return (NULL);
	return (data);
}

int	line_count(t_data *data, char *path)
{
	char	*line;
	int		i;

	i = 0;
	data->fd = open(path, O_RDONLY);
	if (data->fd == -1)
		return (0);
	line = get_next_line(data->fd);
	data->map.length = ft_strlen(line) - 1;
	while (line)
	{
		i++;
		free(line);
		line = get_next_line(data->fd);
	}
	return (i);
}

void	fill_map(t_data *data, char *path)
{
	char	*line;
	int		x;
	int		y;
	int		i;

	i = 0;
	x = 0;
	y = 0;
	data->fd = open(path, O_RDONLY);
	line = get_next_line(data->fd);
	while (line)
	{
		while (line[i] != '\0' && line[i] != '\n')
			data->map.map[y][x++] = line[i++];
		x = 0;
		y++;
		i = 0;
		free(line);
		line = get_next_line(data->fd);
	}
}

int	create_map(t_data *data, char *av)
{
	int	i;

	i = 0;
	data->map.height = line_count(data, av);
	if (!data->map.height)
		return (0);
	data->map.map = ft_calloc(data->map.height, sizeof(char *));
	if (!data->map.map)
		return (0);
	while (i < data->map.height)
	{
		data->map.map[i] = ft_calloc(data->map.length, sizeof(char));
		if (!data->map.map[i])
			return (free_map(data, i), 0);
		i++;
	}
	fill_map(data, av);
	if (!init_player(data))
		return (0);
	return (1);
}
