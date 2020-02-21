/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:53:04 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:53:04 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *nova;

	if (s == NULL)
		return (NULL);
	nova = ft_strnew(len);
	if (nova == NULL)
		return (NULL);
	ft_strncpy(nova, s + start, len);
	nova[len] = 0;
	return (nova);
}
