/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:52:45 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:52:45 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "string.h"

int				ft_strnequ(const char *s1, const char *s2, size_t limit)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 != 0 && *s2 != 0 && limit-- > 0)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
