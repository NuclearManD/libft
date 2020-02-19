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
*/

long	ft_signature(char *str)
{
	long hash;
	long a;

	/* modified version of neonet CRC hash */
	hash = (long)0xC59638FDF6779EA1UL;
	while (*str)
	{
		a = hash^(((long)*str) << 1);
		a += ((long)*str) << 16;
		hash = a ^ (hash << 3);
	}
	return (hash);
}

long	ft_signature(int val)
{
	return (0x2809000000000000L | val);
}

long	ft_signature(long val)
{
	return (val);
}

long	ft_signature(double val)
{
	long res;

	ft_memcpy(&res, &val, sizeof(long));
	return (res);
}
