/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 21:27:22 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 22:11:40 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*tab;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	if (!(tab = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	tab[len] = '\0';
	while (s[i] != '\0')
	{
		tab[i] = (*f)(s[i]);
		i++;
	}
	return (tab);
}
