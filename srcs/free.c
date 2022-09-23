/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:54:29 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 14:47:00 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/backtracking.h"

void	free_map(t_data *data, int j)
{
	int	i;

	i = 0;
	if (!data->map.map)
		return ;
	while (i < j - 1)
	{
		free(data->map.map[i]);
		i++;
	}
	free(data->map.map);
}

void	free_data(t_data *data)
{
	free_map(data, data->map.length);
	free(data);
}
