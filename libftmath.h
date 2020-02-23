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

# include "string.h"

typedef struct	s_mtx
{
	unsigned char	x_size;
	unsigned char	y_size;
	double			*mem;
}				t_mtx;

typedef struct	s_vector
{
	unsigned char	size;
	double			*vals;
}				t_vector;

typedef struct	s_vec2
{
	double			x;
	double			y;
}				t_vec2;

typedef struct	s_vec3
{
	double			x;
	double			y;
	double			z;
}				t_vec3;

double			ft_sqrt(double val);

void			mtx_mult(t_mtx *dest, t_mtx *a, t_mtx *b);
t_mtx			*mtx_new(int x, int y);
t_mtx			*mtx_new_no_zero(int x, int y);
void			mtx_setup_stack(t_mtx *mtx, int x, int y, void *mem);
void			mtx_del(t_mtx *mtx);
t_mtx			*mtx_dup(t_mtx *src);

double			vec_mag(t_vector *vec);
void			vec_norm(t_vector *vec);
void			vec_muls(t_vector *vec, double scalar);
double			vec_dot(t_vector *a, t_vector *b);
t_vector		*vec_new(int size);
t_vector		*vec_dup(t_vector *vec);
void			vec_del(t_vector *vec);

double			*mtx2arr(double *dst, t_mtx *src);
t_mtx			*arr2mtx(t_mtx *dst, double *src);
double			*vec2arr(double *dst, t_vector *src);
t_vector		*arr2vec(t_vector *dst, double *src);

int				mtxcmp(t_mtx *a, t_mtx *b);
int				veccmp(t_vector *a, t_vector *b);

double			vec2_mag(t_vec2 *vec);
void			vec2_norm(t_vec2 *vec);
void			vec2_muls(t_vec2 *vec, double s);
double			vec2_dot(t_vec2 *a, t_vec2 *b);
t_vec2			*vec2_new(double x, double y);
t_vec2			*vec2_dup(t_vec2 *vec);
t_vec2			*vec2_cpy(t_vec2 *dst, t_vec2 *src);
double			vec3_mag(t_vec3 *vec);
void			vec3_norm(t_vec3 *vec);
void			vec3_muls(t_vec3 *vec, double s);
double			vec3_dot(t_vec3 *a, t_vec3 *b);
t_vec3			*vec3_new(double x, double y, double z);
t_vec3			*vec3_dup(t_vec3 *vec);
t_vec3			*vec3_cpy(t_vec3 *dst, t_vec3 *src);

#endif
