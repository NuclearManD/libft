/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:53:22 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:53:22 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char			*ft_strjoin(const char *s1, const char *s2)
{
	char	*out;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	out = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (out == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		out[i++] = *(s1++);
	while (*s2)
		out[i++] = *(s2++);
	out[i] = 0;
	return (out);
}
