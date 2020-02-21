/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:52:37 by dbrophy           #+#    #+#             */
/*   Updated: 2019/10/28 13:54:51 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(char *str)
{
	int out;
	int i;
	int isneg;

	out = 0;
	while (ft_isspace(*str))
		if (*(str++) == 0)
			return (0);
	isneg = 1 - 2 * (*str == '-');
	i = 1 * (str[0] == '-' || str[0] == '+');
	while ((str[i] <= '9') && (str[i] >= '0'))
		out = (out * 10) + isneg * (str[i++] - '0');
	return (out);
}
