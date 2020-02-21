/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:48:43 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 13:48:43 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include "string.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nova;
	t_list *progress;

	if (lst == NULL)
		return (NULL);
	nova = f(lst);
	if (nova == NULL)
		return (NULL);
	progress = nova;
	while (lst->next)
	{
		lst = lst->next;
		if ((progress->next = f(lst)) == NULL)
		{
			ft_lstdel(&nova, NULL);
			return (NULL);
		}
		progress = progress->next;
	}
	progress->next = NULL;
	return (nova);
}
