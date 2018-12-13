/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 21:27:41 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 22:11:33 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*tab;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!(tab = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	tab[len] = '\0';
	while (s[i] != '\0')
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	return (tab);
}
