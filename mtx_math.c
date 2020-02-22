/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_math.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 09:00:28 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 09:00:28 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

/*
** For performance reasons, this library assumes all sizes are correct...
*/

void			mtx_mult(t_mtx *dest, t_mtx *a, t_mtx *b)
{
	int		x;
	int		y;
	int		i;
	double	sum;

	x = -1;
	y = -1;
	while (++x < dest->x_size)
		while (++y < dest->y_size)
		{
			sum = 0.0;
			i = -1;
			while (++i < a->x_size)
				sum += a->mem[i + y * a->x_size] * b->mem[x + i * b->y_size];
			dest->mem[x + y * dest->x_size] = sum;
		}
}
