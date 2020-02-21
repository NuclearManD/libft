/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:55:26 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 11:55:26 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = (const unsigned char*)s1;
	b = (const unsigned char*)s2;
	i = -1;
	while (++i < n)
		if (a[i] != b[i])
			return (a[i] - b[i]);
	return (0);
}
