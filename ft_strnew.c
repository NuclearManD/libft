/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:59:40 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 11:59:40 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char			*ft_strnew(size_t size)
{
	char *mem;

	mem = malloc(++size);
	if (mem == NULL)
		return (NULL);
	while (size--)
		mem[size] = 0;
	return (mem);
}
