/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:53:15 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/22 15:21:13 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/backtracking.h"

int main(int ac, char **av)
{
	t_data	*data;
	(void)av;

	if (ac != 2)
		return (1);
	data = create_data();
	if (!data)
		return (2);
	if (!create_map(data, av[1]))
		return (free(data), 3);
	// backtracking(map)
	print_map(data);
	free_data(data);
	return (0);
}
