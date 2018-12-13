/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 22:04:21 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 22:53:06 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_nbwords(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (*s)
	{
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		else if (word == 1 && *s == c)
			word = 0;
		s++;
	}
	return (i);
}

static int		ft_strlen_custom(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nb_words = ft_nbwords((char *)s, c);
	if (!(tab = (char **)malloc((nb_words + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		if (!(tab[i] = ft_strsub((char *)s, 0, ft_strlen_custom((char *)s, c))))
		{
			free(tab);
			return (NULL);
		}
		s = s + ft_strlen_custom((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
