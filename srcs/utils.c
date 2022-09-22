/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:55:03 by msharifi          #+#    #+#             */
/*   Updated: 2022/09/22 14:53:39 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/backtracking.h"

void	*ft_calloc(int n, int size)
{
	void	*tab;
	char	*str;

	if (n <= 0 || size <= 0)
		return (NULL);
	tab = malloc(size * n);
	if (!tab)
		return (NULL);
	str = tab;
	while (--n)
		str[n] = '\0';
	return (tab);
}
