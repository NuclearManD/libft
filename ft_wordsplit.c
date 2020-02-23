/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:36:50 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/23 11:36:50 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

int				ft_wordsplit(char **arr, char *s, int maxcount)
{
	int retval;

	if (s == NULL || arr == NULL)
		return (-1);
	s = ft_strdup(s);
	retval = 0;
	while (*s)
	{
		if (*s != 0 && !ft_isspace(*s))
		{
			if (retval < maxcount - 1)
				arr[retval] = s;
			else if (retval == maxcount - 1)
				arr[retval] = NULL;
			retval++;
		}
		while (*s != 0 && !ft_isspace(*s))
			s++;
		while (ft_isspace(*s))
			*(s++) = 0;
	}
	if (retval < maxcount - 1)
		arr[retval] = NULL;
	return (retval);
}
