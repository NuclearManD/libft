/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 00:00:41 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 00:00:41 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "string.h"
#include "libft.h"

char			*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	size_t	j;

	if (str == NULL || to_find == NULL)
		return (NULL);
	j = ft_strlen(to_find) - 1;
	if (*to_find == 0)
		return ((char*)str);
	while (*str && j < len)
	{
		i = 0;
		while (str[i] == to_find[i])
			if (to_find[++i] == 0)
				return ((char*)str);
		str++;
		j++;
	}
	return (NULL);
}
