/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:37:55 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/18 13:37:55 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char			*ft_strchr(char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*s != (char)c)
		if (*(s++) == 0)
			return (NULL);
	return (s);
}
