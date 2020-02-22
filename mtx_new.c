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
#include "stdlib.h"

mtx_t			*mtx_new(int x, int y)
{
	mtx_t	*mtx;

	mtx = (void*)malloc(sizeof(mtx_t));
	mtx->x_size = x;
	mtx->y_size = y;
	mtx->mem = (double**)malloc(sizeof(double*) * x);
	if (mtx->mem == NULL)
		return (NULL);
	while (x--)
	{
		mtx->mem[x] = (double*)malloc(sizeof(double) * y);
		if (mtx->mem[x] == NULL)
		{
			while (++x < mtx->x_size)
				free(mtx->mem[x]);
			free(mtx->mem);
			return (NULL);
		}
		y = mtx->y_size;
		while (y--)
			mtx->mem[x][y] = 0;
	}
	return (mtx);
}

void			mtx_del(mtx_t *mtx)
{
	int x;

	x = -1;
	while (++x < mtx->x_size)
		free(mtx->mem[x]);
	free(mtx->mem);
	free(mtx);
}

mtx_t			*mtx_dup(mtx_t *src)
{
	int		x;
	int		y;
	mtx_t	*mtx;

	mtx = (void*)malloc(sizeof(mtx_t));
	mtx->x_size = src->x_size;
	mtx->y_size = src->y_size;
	mtx->mem = (double**)malloc(sizeof(double*) * x);
	if (mtx->mem == NULL)
		return (NULL);
	while (x--)
	{
		mtx->mem[x] = (double*)malloc(sizeof(double) * y);
		if (mtx->mem[x] == NULL)
		{
			while (++x < mtx->x_size)
				free(mtx->mem[x]);
			free(mtx->mem);
			return (NULL);
		}
		y = mtx->y_size;
		while (y--)
			mtx->mem[x][y] = src->mem[x][y];
	}
	return (mtx);
}
