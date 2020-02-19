/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 23:25:16 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/18 23:25:16 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i-- > 0)
		if (s[i] == (char)c)
			return (&(s[i]));
	return NULL;
}
