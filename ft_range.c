/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 03:40:49 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 05:21:02 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	if (!(tab = (int*)(malloc(sizeof(int) * range))))
		return (NULL);
	i = 0;
	while (i < range)
		tab[i++] = min++;
	return (tab);
}
