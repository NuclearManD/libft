/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 12:02:57 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/23 12:02:57 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftmath.h"
#include "stdlib.h"

t_vec2			*vec2_new(double x, double y)
{
	t_vec2 *vec;

	vec = malloc(sizeof(t_vec2));
	vec->x = x;
	vec->y = y;
	return (vec);
}

t_vec2			*vec2_dup(t_vec2 *vec)
{
	return ((t_vec2*)ft_memdup(vec, sizeof(t_vec2)));
}

t_vec2			*vec2_cpy(t_vec2 *dst, t_vec2 *src)
{
	return ((t_vec2*)ft_memcpy(dst, src, sizeof(t_vec2)));
}
