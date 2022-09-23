/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:53:15 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/23 18:05:47 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/backtracking.h"

int main(int ac, char **av)
{
	t_data	*data;
	if (ac != 2)
		return (1);
	data = create_data();
	if (!data)
		return (2);
	if (!create_map(data, av[1]))
		return (free_data(data), 3);
	is_map_possible(data, av[1]);
	free_data(data);
	return (0);
}
