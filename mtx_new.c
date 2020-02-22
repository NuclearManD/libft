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
	mtx->mem = (double**)malloc(sizeof(double*) * x);
	if (mtx->mem == NULL)
		return (NULL);
	while (x--)
	{
		mtx->mem[x] = (double*)malloc(sizeof(double) * mtx->y_size);
		if (mtx->mem[x] == NULL)
		{
			while (++x < mtx->x_size)
				free(mtx->mem[x]);
			free(mtx->mem);
			return (NULL);
		}
		ft_bzero(mtx->mem[x], y * sizeof(double));
	}
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
	mtx->mem = (double**)malloc(sizeof(double*) * x);
	if (mtx->mem == NULL)
		return (NULL);
	while (x--)
	{
		mtx->mem[x] = (double*)malloc(sizeof(double) * mtx->y_size);
		if (mtx->mem[x] == NULL)
		{
			while (++x < mtx->x_size)
				free(mtx->mem[x]);
			free(mtx->mem);
			return (NULL);
		}
	}
	return (mtx);
}

void			mtx_del(t_mtx *mtx)
{
	unsigned char x;

	x = -1;
	while (++x < mtx->x_size)
		free(mtx->mem[x]);
	free(mtx->mem);
	free(mtx);
}

t_mtx			*mtx_dup(t_mtx *src)
{
	unsigned char	x;
	t_mtx			*mtx;

	mtx = (void*)malloc(sizeof(t_mtx));
	if (mtx == NULL)
		return (NULL);
	ft_memcpy(&(mtx->x_size), &(src->x_size), 2);
	mtx->mem = (double**)malloc(sizeof(double*) * loc[0]);
	if (mtx->mem == NULL)
		return (NULL);
	x = src->x_size;
	while (x--)
	{
		mtx->mem[x] = (double*)malloc(sizeof(double) * mtx->y_size);
		if (mtx->mem[x] == NULL)
		{
			while (++x < mtx->x_size)
				free(mtx->mem[x]);
			free(mtx->mem);
			return (NULL);
		}
		ft_memcpy(mtx->mem[x], src->mem[x], src->y_size * sizeof(double));
	}
	return (mtx);
}
