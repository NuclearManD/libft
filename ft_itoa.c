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

#include "libft.h"
#include "stdlib.h"

static int		itoa_setup(int n, char **str)
{
	int size;
	int b;

	size = (n == 0) + (n < 0) + 1;
	b = n;
	while (b != 0)
	{
		b = b / 10;
		size++;
	}
	*str = (char*)malloc(size);
	if (*str == NULL)
		return (-1);
	(*str)[--size] = 0;
	if (n == 0)
		(*str)[0] = '0';
	return (size);
}

char			*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*str;

	len = itoa_setup(n, &str);
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len - ++i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
