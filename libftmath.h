/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmath.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:49:54 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/21 16:49:54 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTMATH_H
# define LIBFTMATH_H

#include "string.h"

typedef struct	s_mtx
{
	unsigned char	x_size;
	unsigned char 	y_size;
	double			**mem;
}				t_mtx;

typedef struct	s_vector
{
	unsigned char 	size;
	double			*vals;
}				t_vector;


double			ft_sqrt(double val);
void			mtx_mult(t_mtx *dest, t_mtx *a, t_mtx *b);
t_mtx			*mtx_new(int x, int y);
t_mtx			*mtx_new_no_zero(int x, int y);
void			mtx_del(t_mtx *mtx);
t_mtx			*mtx_dup(t_mtx *src);
double			vec_mag(t_vector *vec);
void			vec_norm(t_vector *vec);
void			vec_muls(t_vector *vec, double S);
double			vec_dot(t_vector *a, t_vector *b);
t_vector		*vec_new(int size);
t_vector		*vec_dup(t_vector *vec);
void			vec_del(t_vector *vec);

#endif
