/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:25:52 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 17:04:43 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTRACKING_H
# define BACKTRACKING_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../GNL/get_next_line.h"

typedef struct s_map
{
	int		height;
	int		length;
	char	**map;
}				t_map;

typedef struct s_data
{
	int		fd;
	int		player_x;
	int		player_y;
	t_map	map;
}				t_data;

// backtracking.c
int	recursive(t_data *data, int y, int x, int *dest);
int	is_map_possible(t_data *data, char *path);

// create.c
t_data	*create_data();
int		line_count(t_data *data, char *path);
void	fill_map(t_data *data, char *path);
int		create_map(t_data *data, char *av);

// free.c
void	free_map(t_data *data, int j);
void	free_data(t_data *data);

// init.c
int	init_player(t_data *data);

// print.c
void	print_map(t_data *data);
void	print_player_pos(t_data *data);
void	print_dest(t_data *data);

// utils.c
void	*ft_calloc(int n, int size);

#endif