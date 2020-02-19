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

static int	itoa_setup(int n, char **str)
{
	int size;

	size = ft_imax(1, ft_logi(10, n)) + 1 + (n < 0);
	*str = (char*)malloc(size);
	(*str)[--size] = 0;
	if (n == 0)
		(*str)[0] = '0';
	return (size);
}

char		*ft_itoa(int n)
{
	int		len;
	char 	*str;

	len = itoa_setup(n, &str);
	if (str == NULL)
		return (NULL);
	len = 0;
	if (n == -2147483648)
	{
		str[len++] = '-';
		str[len++] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[len++] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len++] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
