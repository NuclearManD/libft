/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:01:10 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:01:10 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void			ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	if (s == NULL || f == NULL)
		return ;
	i = -1;
	while (s[++i])
		f(i, &(s[i]));
}
