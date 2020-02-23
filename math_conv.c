/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:51:34 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 18:51:34 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftmath.h"

double			*mtx2arr(double *dst, t_mtx *src)
{
	if (dst != NULL && src != NULL)
		ft_memcpy(dst, src->mem, sizeof(double) * src->x_size * src->y_size);
	else
		return (NULL);
	return (dst);
}

t_mtx			*arr2mtx(t_mtx *dst, double *src)
{
	if (dst != NULL && src != NULL)
		ft_memcpy(dst->mem, src, sizeof(double) * dst->x_size * dst->y_size);
	else
		return (NULL);
	return (dst);
}

double			*vec2arr(double *dst, t_vector *src)
{
	if (dst != NULL && src != NULL)
		ft_memcpy(dst, src->vals, sizeof(double) * src->size);
	else
		return (NULL);
	return (dst);
}

t_vector		*arr2vec(t_vector *dst, double *src)
{
	if (dst != NULL && src != NULL)
		ft_memcpy(dst->vals, src, sizeof(double) * dst->size);
	else
		return (NULL);
	return (dst);
}
