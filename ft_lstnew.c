/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:45:57 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 13:45:57 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list			*ft_lstnew(const void *content, size_t content_size)
{
	t_list *res;

	if (content == NULL)
		content_size = 0;
	res = (t_list*)malloc(sizeof(t_list));
	if (res == NULL)
		return (NULL);
	if (content)
	{
		res->content = malloc(content_size);
		if (res->content == NULL)
		{
			free(res);
			return (NULL);
		}
		ft_memcpy(res->content, content, content_size);
	}
	else
		res->content = NULL;
	res->content_size = content_size;
	res->next = NULL;
	return (res);
}
