/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:53:15 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/22 17:44:24 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/backtracking.h"

int	recursive(int i)
{
	if (i == 0)
		return (1);
	printf("%d\n", i);
	recursive(i - 1);
	recursive(i - 1);
	printf("After recursive call number [%d]\n", i);
	return (1);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int i = 3;
	recursive(i);

	// t_data	*data;
	// if (ac != 2)
	// 	return (1);
	// data = create_data();
	// if (!data)
	// 	return (2);
	
	// if (!create_map(data, av[1]))
	// 	return (free(data), 3);
	// backtracking(map)
	// print_map(data);
	// free_data(data);
	return (0);
}
