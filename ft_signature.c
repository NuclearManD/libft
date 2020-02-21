/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signature.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:16:04 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 14:16:04 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** These functions act as hash functions to easily check that two objects match
**
** A modified version of neonet CRC hash is used for ft_signature_s
*/

long			ft_signature_s(char *str)
{
	long hash;
	long a;

	hash = (long)0xC59638FDF6779EA1UL;
	while (*str)
	{
		a = hash ^ (((long)*str) << 1);
		a += ((long)*str) << 16;
		hash = a ^ (hash << 3);
	}
	return (hash);
}

long			ft_signature_i(int val)
{
	return (0x2809000000000000L | val);
}

long			ft_signature_l(long val)
{
	return (val);
}

long			ft_signature_d(double val)
{
	long res;

	ft_memcpy(&res, &val, sizeof(long));
	return (res);
}
