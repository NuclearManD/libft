/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 12:14:08 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/23 12:14:08 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftmath.h"
#include "stdlib.h"

t_vec3			*vec3_new(double x, double y, double z)
{
	t_vec3 *vec;

	vec = malloc(sizeof(t_vec3));
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}

t_vec3			*vec3_dup(t_vec3 *vec)
{
	return ((t_vec3*)ft_memdup(vec, sizeof(t_vec3)));
}

t_vec3			*vec3_cpy(t_vec3 *dst, t_vec3 *src)
{
	return ((t_vec3*)ft_memcpy(dst, src, sizeof(t_vec3)));
}
