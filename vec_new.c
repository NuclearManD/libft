/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_newdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:52:33 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 14:52:33 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"
#include "libft.h"
#include "stdlib.h"

t_vector		*vec_new(int size)
{
	t_vector	*vec;
	int			i;

	vec = malloc(sizeof(t_vector));
	if (vec == NULL)
		return (NULL);
	vec->vals = malloc(size * sizeof(double));
	if (vec->vals == NULL)
	{
		free(vec);
		return (NULL);
	}
	i = size;
	while (i--)
		vec->vals[i] = 0;
	vec->size = size;
	return (vec);
}

t_vector		*vec_dup(t_vector *vec)
{
	t_vector *nova;

	nova = vec_new(vec->size);
	if (nova != NULL)
		ft_memcpy(nova->vals, vec->vals, vec->size * sizeof(double));
	return (nova);
}

void			vec_del(t_vector *vec)
{
	if (vec == NULL)
		return ;
	free(vec->vals);
	free(vec);
}
