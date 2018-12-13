/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaudry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 03:10:54 by bchaudry          #+#    #+#             */
/*   Updated: 2018/12/06 05:21:36 by bchaudry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
		return (lst);
	}
	if (!(lst->content = (void*)malloc(sizeof(void*) * content_size)))
	{
		free(lst);
		return (NULL);
	}
	lst->content = ft_memcpy(lst->content, (const void*)content, content_size);
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
