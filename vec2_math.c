/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_math.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:54:30 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/23 11:54:30 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

double			vec2_mag(t_vec2 *vec)
{
	double x;
	double y;

	x = vec->x;
	y = vec->y;
	return (ft_sqrt(x * x + y * y));
}

void			vec2_norm(t_vec2 *vec)
{
	double x;
	double y;
	double mag;

	x = vec->x;
	y = vec->y;
	mag = ft_sqrt(x * x + y * y);
	vec->x = x / mag;
	vec->y = y / mag;
}

void			vec2_muls(t_vec2 *vec, double s)
{
	vec->x *= s;
	vec->y *= s;
}

double			vec2_dot(t_vec2 *a, t_vec2 *b)
{
	return (a->x * b->x + a->y * b->y);
}
