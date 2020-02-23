/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:33:34 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 16:33:34 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"
#include "libft.h"
#include "stdlib.h"

t_mtx			*mtx_new(int x, int y)
{
	t_mtx	*mtx;

	mtx = (void*)malloc(sizeof(t_mtx));
	if (mtx == NULL)
		return (NULL);
	mtx->x_size = x;
	mtx->y_size = y;
	mtx->mem = (double*)malloc(sizeof(double) * x * y);
	if (mtx->mem == NULL)
	{
		free(mtx);
		return (NULL);
	}
	ft_bzero(mtx->mem, x * y * sizeof(double));
	return (mtx);
}

t_mtx			*mtx_new_no_zero(int x, int y)
{
	t_mtx	*mtx;

	mtx = (void*)malloc(sizeof(t_mtx));
	if (mtx == NULL)
		return (NULL);
	mtx->x_size = x;
	mtx->y_size = y;
	mtx->mem = (double*)malloc(sizeof(double) * x * y);
	if (mtx->mem == NULL)
	{
		free(mtx);
		return (NULL);
	}
	return (mtx);
}

void			mtx_setup_stack(t_mtx *mtx, int x, int y, void *mem)
{
	mtx->x_size = x;
	mtx->y_size = y;
	mtx->mem = (double*)mem;
}

t_mtx			*mtx_dup(t_mtx *src)
{
	t_mtx	*mtx;

	if (src == NULL)
		return (NULL);
	mtx = (void*)malloc(sizeof(t_mtx));
	if (mtx == NULL)
		return (NULL);
	mtx->x_size = src->x_size;
	mtx->y_size = src->y_size;
	mtx->mem = (double*)malloc(sizeof(double) * src->x_size * src->y_size);
	if (mtx->mem == NULL)
	{
		free(mtx);
		return (NULL);
	}
	ft_memcpy(mtx->mem, src->mem, sizeof(double) * src->x_size * src->y_size);
	return (mtx);
}
