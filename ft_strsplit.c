/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrophy <dbrophy@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:54:04 by dbrophy           #+#    #+#             */
/*   Updated: 2020/02/19 12:54:04 by dbrophy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	**ft_strsplit(const char *s, char c)
{
	int			nstr;
	char		**arr;
	const char	*so;
	char		last;

	nstr = ft_strcnt_norep(s, c) + 1;
	arr = (char**)malloc(sizeof(char*) * (nstr + 1));
	if (arr == NULL || c == 0)
		return NULL;
	arr[nstr] = NULL;
	nstr = 0;
	last = c;
	while (*s == c)
		s++;
	so = s--;
	while (*(++s))
	{
		if (*s == c && c != last)
		{
			arr[nstr++] = ft_strcut(so, c);
			so = ++s;
		}
		last = c;
	}
	return (arr);
}
