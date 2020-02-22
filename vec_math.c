/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_math.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:54:26 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 14:54:26 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"
#include "libft.h"

/*
** Only YOU are responsible for ensuring that your vectors are the right
** size(s).  This library assumes you have ensured this, to work faster.
*/

double			vec_mag(t_vector *vec)
{
	double	sum;
	double	a;
	int		i;

	i = vec->size;
	sum = 0.0;
	while (i--)
	{
		a = vec->vals[i];
		sum += a * a;
	}
	return (ft_sqrt(sum));
}

void			vec_norm(t_vector *vec)
{
	double	mag;
	int		i;

	mag = vec_mag(vec);
	i = vec->size;
	while (i--)
		vec->vals[i] /= mag;
}

void			vec_muls(t_vector *vec, double scalar)
{
	int		i;

	i = vec->size;
	while (i--)
		vec->vals[i] *= scalar;
}

double			vec_dot(t_vector *a, t_vector *b)
{
	double	sum;
	int		i;

	sum = 0;
	i = a->size;
	while (i--)
		sum += a->vals[i] * b->vals[i];
	return (sum);
}
