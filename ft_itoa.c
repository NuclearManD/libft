/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:55:08 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:55:08 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"
#include "stdlib.h"

static int	itoa_setup(int num, char **str)
{
	int size;

	size = ft_imax(1, ft_logi(10, n)) + 1 + (n < 0);
	*str = (char*)malloc(size);
	str[--size] = 0;
	if (nb == 0)
		out[0] = '0';
	return (size);
}

char		*ft_itoa(int n)
{
	int		len;
	char 	*str;

	size = itoa_setup(n, &str);
	if (str == NULL)
		return (NULL);
	len = 0;
	else if (nb == -2147483648)
	{
		str[len++] = '-';
		str[len++] = '2';
		nb = 147483648;
	}
	else if (nb < 0)
	{
		str[len++] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		str[len++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
