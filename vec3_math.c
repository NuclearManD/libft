/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_math.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 12:00:36 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/23 12:00:36 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

double			vec3_mag(t_vec3 *vec)
{
	double x;
	double y;
	double z;

	x = vec->x;
	y = vec->y;
	z = vec->z;
	return (ft_sqrt(x * x + y * y + z * z));
}

void			vec3_norm(t_vec3 *vec)
{
	double x;
	double y;
	double z;
	double mag;

	x = vec->x;
	y = vec->y;
	z = vec->z;
	mag = ft_sqrt(x * x + y * y + z * z);
	vec->x = x / mag;
	vec->y = y / mag;
	vec->z = z / mag;
}

void			vec3_muls(t_vec3 *vec, double s)
{
	vec->x *= s;
	vec->y *= s;
	vec->z *= s;
}

double			vec3_dot(t_vec3 *a, t_vec3 *b)
{
	return (a->x * b->x + a->y * b->y + a->z * b->z);
}
