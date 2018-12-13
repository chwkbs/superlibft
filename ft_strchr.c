/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 21:08:22 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 22:10:04 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chc;
	int		i;

	i = 0;
	chc = (char)c;
	while (s[i])
	{
		if (s[i] == chc)
			return ((char*)&s[i]);
		i++;
	}
	if (s[i] == chc)
		return ((char*)&s[i]);
	return (NULL);
}
