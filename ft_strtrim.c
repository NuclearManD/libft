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

char	*ft_strtrim(char const *s)
{
	int len;
	char *nova;

	while (ft_is_space(*s))
		s++;
	while (s[len] && !ft_is_space(s[len]))
		len++;
	nova = (char*)malloc(len + 1);
	if (nova == NULL)
		return (NULL);
	nova[len] = 0;
	while (len--)
		nova[len] = s[len];
	return (nova);
}