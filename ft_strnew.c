/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 22:03:18 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 22:52:43 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*text;

	if (!(text = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(text, size);
	text[size] = '\0';
	return (text);
}
