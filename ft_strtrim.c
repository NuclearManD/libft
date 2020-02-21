/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:53:44 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:53:44 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char			*ft_strtrim(const char *s)
{
	int		len;
	char	*nova;

	if (s == NULL)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	len = ft_strlen(s);
	if (len > 0)
		while (ft_isspace(s[len - 1]))
			len--;
	nova = (char*)malloc(len + 1);
	if (nova == NULL)
		return (NULL);
	nova[len] = 0;
	while (len--)
		nova[len] = s[len];
	return (nova);
}
