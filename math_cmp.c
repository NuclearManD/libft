/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_cmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:56:51 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 18:56:51 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftmath.h"

int				mtxcmp(t_mtx *a, t_mtx *b)
{
	size_t size;

	if (a == NULL || b == NULL)
		return (a == b);
	if (a->x_size != b->x_size || a->y_size != b->y_size)
		return (-1);
	size = sizeof(double) * a->x_size * a->y_size;
	return (ft_memcmp(a->mem, b->mem, size) == 0);
}

int				veccmp(t_vector *a, t_vector *b)
{
	if (a == NULL || b == NULL)
		return (a == b);
	if (a->size != b->size)
		return (-1);
	return (ft_memcmp(a->vals, b->vals, sizeof(double) * a->size) == 0);
}
