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

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

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
void			mtx_mult(mtx_t *dest, mtx_t *a, mtx_t *b);
mtx_t			*mtx_new(int x, int y);
void			mtx_del(mtx_t *mtx);
mtx_t			*mtx_dup(mtx_t *src);
double			vec_mag(t_vector *vec);
void			vec_norm(t_vector *vec);
void			vec_muls(t_vector *vec, double S);
double			vec_dot(t_vector *a, t_vector *b);
t_vector		*vec_new(int size);
t_vector		*vec_dup(t_vector *vec);
void			vec_del(t_vector *vec);

#endif
